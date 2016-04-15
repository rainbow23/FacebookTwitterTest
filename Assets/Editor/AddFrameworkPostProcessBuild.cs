using UnityEngine;
using System.Collections;
using System.IO;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEditor.iOS.Xcode;

public class AddFrameworkPostProcessBuild : MonoBehaviour {
	private static PBXProject m_PBXProject = null;
	private static string	  m_ProjPath = null;

	private static string m_Target = null;
	private static string m_TopParentFolderName = "AddiOSFile";

	internal static void CopyAndReplaceDirectory (string srcPath, string dstPath)
	{
		if (Directory.Exists (dstPath))
		{
			Directory.Delete (dstPath);
		}
		if (File.Exists (dstPath))
		{
			File.Delete (dstPath);
		}

		Directory.CreateDirectory (dstPath);

		foreach (var file in Directory.GetFiles(srcPath))
			File.Copy (file, Path.Combine (dstPath, Path.GetFileName (file)));

		foreach (var dir in Directory.GetDirectories(srcPath))
			CopyAndReplaceDirectory (dir, Path.Combine (dstPath, Path.GetFileName (dir)));
	}


	[PostProcessBuild (100)]
	public static void OnPostprocessBuild(BuildTarget buildTarget, string path){
		if (buildTarget != BuildTarget.iPhone) return;
		//CopyiOSFrameWork(path);
		XcodeSettings(path);

//		string _worldPath = Path.Combine(path, m_TopParentFolderName);
//		string _localPath = m_TopParentFolderName;
//		AddCopiedFoldersToXcodeSettings(_worldPath, _localPath);
		Debug.Log ("finish");
	}

	/// <summary>
	/// Unity project内のフォルダからXcode Projectにframeworkフォルダをコピー
	/// </summary>
	/// <param name="path">ビルドされたXcode path</param>
	private static void CopyiOSFrameWork(string path)
	{
		//Debug.Log ("CopyiOSFrameWork");
		// get parent path from curr project
		string _appDataPath = Application.dataPath;
		int    _tempCount   = _appDataPath.LastIndexOf("/");
		string _parentPath 	= _appDataPath.Substring(0, _tempCount + 1) ;

		string _dstPath     	  = Path.Combine(path, m_TopParentFolderName);
		//CopyAndReplaceDirectory(Path.Combine(_parentPath,m_TopParentFolderName), _dstPath);
	}


	/// <summary>
	/// Xcode Project内にコピーされたフォルダをXcodeに認識させる
	/// </summary>
	/// <param name="path">ビルドされたXcode path</param>
	private static void AddCopiedFoldersToXcodeSettings(string worldPath, string localPath)
	{
		string _worldFolderPath = worldPath;
		string _localFolderPath = localPath;
		string lastFolderName;
		string lastFolderNameOfExtentions;

		//fileを追加
		foreach (string file in Directory.GetFiles(_worldFolderPath))
		{	
			string guid = null;
			string _fileName = Path.GetFileName(file);
			string _fileNameExtension = Path.GetExtension(_fileName);
			//Debug.Log ("_fileName: "   + _fileName);
			lastFolderName = Path.GetFileName( Path.GetDirectoryName( file ) );
//			Debug.Log ("lastFolderName in file: "   + lastFolderName);
			lastFolderNameOfExtentions = Path.GetExtension(lastFolderName);

			//親フォルダ名が.frameworkの場合は追加しない
			if (string.Equals (lastFolderNameOfExtentions, ".framework") == false) 
			{
				string _localFilePath = Path.Combine(_localFolderPath, _fileName);
				//Debug.Log ("_localFilePath: " + _localFilePath);
				guid = m_PBXProject.AddFile (_localFilePath, _localFilePath, PBXSourceTree.Source);//PBXSourceTree.Sourceを使う場合ローカルパスが使える
				m_PBXProject.AddFileToBuild(m_Target, guid);
			}
		}


		//folderが存在する場合パスを作り再帰処理
		foreach(string dir in Directory.GetDirectories(_worldFolderPath)){
			//Debug.Log("dir: " + dir);

			//Path.GetDirectoryNameはフォルダ名が最後にある場合、最後から２番目のフォルダを取得してしまうので使わない
			int _tempCount 	  = dir.LastIndexOf("/");
			lastFolderName 	  = dir.Substring(_tempCount + 1);
			//Debug.Log("lastFolderName: " + lastFolderName); //lastFolderName: AMoAdModules

			string _makeWorldFolderPath;
			string _makeLocalFolderPath;

			//一回目のループはfolderを足さない AddiOSFileが二重に足されるから
			if (string.Equals (m_TopParentFolderName, lastFolderName)) {
				_makeWorldFolderPath = _worldFolderPath;
				_makeLocalFolderPath = _localFolderPath;
			} 
			else{
				_makeWorldFolderPath = Path.Combine (_worldFolderPath, lastFolderName);
				_makeLocalFolderPath = Path.Combine (_localFolderPath, lastFolderName);	
			}

			//フォルダ内に.framework フォルダがあれば追加
			lastFolderNameOfExtentions = Path.GetExtension(lastFolderName);
			//Debug.Log ("lastFolderNameOfExtentions: " + lastFolderNameOfExtentions);

			if (string.Equals (lastFolderNameOfExtentions, ".framework")) {
//				Debug.Log ("lastFolderName in foloder : " + lastFolderName);
//				Debug.Log ("_makeLocalFolderPath : "      + _makeLocalFolderPath);
				string _guid =  m_PBXProject.AddFile (_makeLocalFolderPath, _makeLocalFolderPath, PBXSourceTree.Source);
				m_PBXProject.AddFileToBuild(m_Target, _guid);
			} 
			else {
					//			Debug.Log ("_makeWorldFolderPath: " + _makeWorldFolderPath);
					//			Debug.Log ("_makeLocalFolderPath: " + _makeLocalFolderPath);
					AddCopiedFoldersToXcodeSettings(_makeWorldFolderPath, _makeLocalFolderPath);	
			}
		}
		File.WriteAllText (m_ProjPath, m_PBXProject.WriteToString ());
	}



	private static void XcodeSettings(string buildPath)
	{
		m_ProjPath = buildPath + "/Unity-iPhone.xcodeproj/project.pbxproj";
		m_PBXProject = new PBXProject();
		m_PBXProject.ReadFromFile(m_ProjPath);
		m_Target = m_PBXProject.TargetGuidByName ("Unity-iPhone");
		string target = m_PBXProject.TargetGuidByName("Unity-iPhone");

		string debugConfig 	 = m_PBXProject.BuildConfigByName(target, "Debug");
		string releaseConfig = m_PBXProject.BuildConfigByName(target, "Release");



		m_PBXProject.AddFrameworkToProject(m_Target, "ImageIO.framework",    false);
		m_PBXProject.AddBuildProperty	  (m_Target, "LIBRARY_SEARCH_PATHS",  "$(inherited)");
		m_PBXProject.AddBuildProperty	  (m_Target, "LIBRARY_SEARCH_PATHS",  "$(SRCROOT)");
		m_PBXProject.AddBuildProperty	  (m_Target, "LIBRARY_SEARCH_PATHS",  "$(SRCROOT)/Libraries");
//		m_PBXProject.AddBuildProperty	  (m_Target, "LIBRARY_SEARCH_PATHS",  "$(PROJECT_DIR)/AddiOSFile/AMoAdModules");
//
//		m_PBXProject.AddBuildProperty	  (m_Target, "FRAMEWORK_SEARCH_PATHS","$(PROJECT_DIR)/AddiOSFile/GoogleMobileAdsSdkiOS-7.6.0");
//		m_PBXProject.AddBuildProperty	  (m_Target, "FRAMEWORK_SEARCH_PATHS","$(PROJECT_DIR)/AddiOSFile");

		// set code sign identity & provisioning profile
		m_PBXProject.SetBuildPropertyForConfig (debugConfig,  "CODE_SIGN_IDENTITY", "iPhone Developer: YUJIRO OGAWA (YSU953TW92)");
		m_PBXProject.SetBuildPropertyForConfig (releaseConfig,"CODE_SIGN_IDENTITY", "iPhone Distribution: LIICA INC. (JDBLHXAK9V)");																	
		m_PBXProject.SetBuildPropertyForConfig (debugConfig,  "PROVISIONING_PROFILE", "b9452d0d-e2cb-406c-a4bc-ec4eb9ea9983");
		m_PBXProject.SetBuildPropertyForConfig (releaseConfig,"PROVISIONING_PROFILE", "2b8e0f33-d6ee-49e8-8167-5bb871aaaf9b");



		m_PBXProject.WriteToFile(m_ProjPath);

		var plistPath = Path.Combine(buildPath, "Info.plist");
		var plist = new PlistDocument();
		plist.ReadFromFile(plistPath);

		//HTTP接続を行う
		PlistElementDict rootDict = plist.root;
		PlistElementDict atsTypes = rootDict.CreateDict("NSAppTransportSecurity");
		atsTypes.SetBoolean("NSAllowsArbitraryLoads", true);

		//URL Scheme iOS9
		PlistElementArray urlSchemeTypes = rootDict.CreateArray ("LSApplicationQueriesSchemes");
		urlSchemeTypes.AddString("fb190888934393740");
		urlSchemeTypes.AddString("fbauth2");
		urlSchemeTypes.AddString("greatslugger");

		//URL Scheme before iOS9
		PlistElementArray urlTypesParent = rootDict.CreateArray("CFBundleURLTypes");
		PlistElementDict dict = urlTypesParent.AddDict ();
		dict.SetString  ("CFBundleURLName", "");
		PlistElementArray urlSchemeiOS8Types = dict.CreateArray("CFBundleURLSchemes");
		urlSchemeiOS8Types.AddString("fb190888934393740");
		urlSchemeiOS8Types.AddString("fbauth2");
		urlSchemeiOS8Types.AddString("greatslugger");

		//plist.WriteToFile(plistPath);
		// Write to file
		File.WriteAllText(plistPath, plist.WriteToString());
	}

}
