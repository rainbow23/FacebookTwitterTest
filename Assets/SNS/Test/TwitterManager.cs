using UnityEngine;
using System.Collections;
using System.IO;

public class TwitterManager : MonoBehaviour {

	private WWWForm wwwForm;

	void Start ()
	{
		
	}
	public void Initialize(){
		
		SNSManager.Initialize ();
	}

	public void OAuthRequest(){

		SNSManager.OAuthRequest ();
	}

	public void IsAccess()
	{
		if (SNSManager.IsAccessTwitter ()) {
			Debug.Log("IsAccessTwitter true");
		}
		else{
			Debug.Log("IsAccessTwitter false");
		}
	}


	public void TweetWithScreenShot()
	{
		StartCoroutine (TweetWithScreenshot ());
	}



	// 添付に保存されているスクリーンショットを読み込んできてそれをツイートする.
	// もし一時ファイルに保存されていない場合はしばらく待つ.
	IEnumerator	TweetWithScreenshot ()
	{
		const int TIME_OUT = 60;

		// ネットワークが出来ない時にOAuthをかますとブラウザが立ち上がらなくなり、
		// 且つ、InputManagerScript.Instance.ChangeInvalidMode (true);が立ったままになるので、
		// ボタンが押せなくなり進行不能となる.
		// OAuthをかます前にネットワークが正しくつながっているかをチェックする.
		if (Application.internetReachability == NetworkReachability.NotReachable) 
		{
			// 何かしらのメッセージを出してあげた方が良いかも.
			yield break;
		}

		SNSManager.OAuthRequest ();

		// 認証成功かタイムアウトまで待つ.
		// yield return new WaitForSeconds(1f);
		int _timeout = 0;
		while (!SNSManager.IsAccessTwitter () && _timeout < TIME_OUT) {
			yield return null;
			// if (!m_IsAuthRequest) {
			_timeout++;
			// }

			 Debug.Log("!!!!!!!!!!! Twitter Auth Wait");
		}

		 Debug.Log("!!!!!!!!!!! Twitter Auth End");

		yield return new WaitForEndOfFrame();

		var width = Screen.width;
		var height = Screen.height;
		var tex = new Texture2D(width, height, TextureFormat.RGB24, false);
		// Read screen contents into the texture
		tex.ReadPixels(new Rect(0, 0, width, height), 0, 0);

		while (tex == null) {
			Debug.Log ("wait read tex pixels");
			yield return null;
		}
		tex.Apply();
		byte[] screenshot = tex.EncodeToPNG();
		while (screenshot == null) {
			Debug.Log ("wait screenshot encode to PNG");
			yield return null;
		}
		Debug.Log ("screenshot: " + screenshot);

		SNSManager.PostTweet ("some message", screenshot, "japan");
	}


//	public IEnumerator TakeScreenshot(string postMessage="some postMessage")
//	{
//		yield return new WaitForEndOfFrame();
//
//		var width = Screen.width;
//		var height = Screen.height;
//		var tex = new Texture2D(width, height, TextureFormat.RGB24, false);
//		// Read screen contents into the texture
//		tex.ReadPixels(new Rect(0, 0, width, height), 0, 0);
//		tex.Apply();
//		byte[] screenshot = tex.EncodeToPNG();
//
//		wwwForm = new WWWForm();
//		wwwForm.AddBinaryData("image", screenshot, "InteractiveConsole.png");
//		wwwForm.AddField("message", postMessage);
//	}

}
