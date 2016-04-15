using UnityEngine;
using System.IO;
using System.Runtime.InteropServices;

// SNS関連.
public static class SNSManager
{
#if UNITY_ANDROID && !UNITY_EDITOR
	private static AndroidJavaClass		_UnityPlayer; 
	private static AndroidJavaObject	_Activity;
	
	private static AndroidJavaClass		_SNSManager;
	private static AndroidJavaClass		_ReviewManager;
	
	private const string ConsumerKey		= "HbS3hv1aZM3gkiyE5Gqhmlgrn";
	private const string ConsumerSecretKey	= "jn74Cb32zxZ9Zl4w4dWmEm8IGXtoLbd40VoW1KtOt0Hx52eEmA";
	
	// オブジェクトの取得のみの初期化処理.
	public static void	Initialize ()
	{
		if (_SNSManager == null) {
			_UnityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
			_Activity = _UnityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
			
			_SNSManager = new AndroidJavaClass("jp.co.liica.SNSManager");
			_ReviewManager = new AndroidJavaClass("com.example.requestreviewdialog.RequestReview");
		}
	}
	
	// 認証のリクエスト. 
	public static void	OAuthRequest ()
	{
		if (_SNSManager != null) {
			_SNSManager.CallStatic("RequestOAuth", _Activity, ConsumerKey, ConsumerSecretKey);
		}
	}
	
	// ツイートを投稿する(テキストonly).
	// @param string _text : 投稿する文字列.
	// @param string _lang : 言語.
	public static void	PostTweet (string _text, string _lang)
	{
		if (_SNSManager != null) {
			_SNSManager.CallStatic("PostTweet", _text, _lang);
		}
	}
	
	// 画像有りでツイートする.
	// @param string _text : 投稿する文字列.
	// @param byte[] _pngBytes : 投稿する画像.
	// @param string _lang : 言語.
	public static void	PostTweet(string _text, byte[] _pngBytes, string _lang)
	{
		if (_SNSManager != null) {
			_SNSManager.CallStatic("PostTweet", _text, _pngBytes, _lang);
		}
	}
	
	// ラインに投稿する.
	// @param string _text : 投稿する文字列.
	public static void	PostLine(string _text)
	{
		if (_SNSManager != null) {
			_SNSManager.CallStatic("PostLine", _Activity, _text);
		}
	}
		
	// ラインに投稿する(画像付き).
	// @param string _text : 投稿する文字列.
	// @param string _localPath : AndroidはローカルパスからじゃないとLineに画像投稿できないらしい.
	// @param byte[] _pngData : 他のプラットフォームとあわせるため. Androidでは常にnull予定.
	public static void	PostLine(string _text, string _localPath, byte[] _pngData)
	{
		if (_SNSManager != null) {
			_SNSManager.CallStatic("PostLine", _Activity, _text, _localPath);
		}
	}
	
	// ツイートできる状態にあるかどうか(認証したかどうかチェック).
	// @retval true : 問題無し.
	public static bool	IsAccessTwitter() {
		if (_SNSManager != null) {
			return _SNSManager.CallStatic<bool>("IsAccessTwitter", _Activity);
		}
		return false;
	}
		
	// Androidではトースト表示の為, メッセージのみ.
	// @param _title : タイトル.
	// @param _msg : メッセージ.
	public static void	AlertView(string _title, string _msg)
	{
		if (_SNSManager != null) {
			_SNSManager.CallStatic("ToastView", _Activity, _msg);
		}
	}
	
	// レビューダイアログを表示する.
	// @param string _layout : レイアウトファイル(.xml抜き).
	// @param string _mailTitle : 苦情を送る際のメールタイトル.
	// @param string _mailAddress : 苦情の送り先アドレス.
	// @param string _reviewPath : GooglePlayへのパス.
	// @param string[] _str : レビューに表示する為のテキスト. Androidはレイアウトで文字を表示するので不要.
	public static void	ViewReviewDialog(string _layout, string _mailTitle, string _mailAddress, string _reviewPath, string[] _str) {
		if (_ReviewManager != null) {
			_ReviewManager.CallStatic("showRequestReview", _Activity, _layout, _mailTitle, _mailAddress, _reviewPath);
		}
		else {
			// Debug.Log("!!!!!!!!!!!!!!!!! : " + _ReviewManager);
		}
	}
	
	// ダイアログで何を押されたかを判定する.
	// @retval 0 : 表示中. 1:キャンセル. 2:レビュボタンが押された.
	public static int	GetReviewDialogState() {
		if (_ReviewManager != null) {
			return _ReviewManager.CallStatic<int>("getDialogState");
		}
		else {
			return 1;	// １がキャンセル.
		}
	}
	
	// 問い合わせ用..
	// @param string _mailTitle : 苦情を送る際のメールタイトル.
	// @param string _mailAddress : 苦情の送り先アドレス.
	// @param string _mainText : 本文.
	public static void	SendFeedback(string _mailTitle, string _mailAddress, string _mainText) {
		if (_ReviewManager != null) {
			_ReviewManager.CallStatic("SendFeedBack", _Activity, _mailTitle, _mailAddress, _mainText);
		}
	}
	
#elif UNITY_IPHONE && !UNITY_EDITOR
	// オブジェクトの取得のみの初期化処理.
	[DllImport("__Internal")]
	private static extern void	_Initialize();
	public static void	Initialize ()
	{
		_Initialize();
	}
	
	// 認証のリクエスト. 
	[DllImport("__Internal")]
	private static extern void	_OAuthRequest();
	public static void	OAuthRequest ()
	{
		_OAuthRequest();
	}
	
	// ツイートを投稿する(テキストonly).
	// @param string _text : 投稿する文字列.
	// @param string _lang : 言語.
	[DllImport("__Internal")]
	private static extern void	_PostTweet(string _text, string _lang);
	public static void	PostTweet (string _text, string _lang)
	{
		_PostTweet(_text, _lang);
	}
	
	// 画像有りでツイートする.
	// @param string _text : 投稿する文字列.
	// @param byte[] _pngBytes : 投稿する画像.
	// @param string _lang : 言語.
	[DllImport("__Internal")]
	private static extern void	_PostTweetWithImage(string _text, byte[] _pngimage, int _length, string _lang);
	public static void	PostTweet(string _text, byte[] _pngBytes, string _lang)
	{
		MemoryStream _ms = new MemoryStream(_pngBytes);
		BinaryWriter _bw = new BinaryWriter(_ms);
		_bw.Flush();
	
		byte[] _srcData = _ms.ToArray();
		
		_bw.Close();
		_ms.Close();
	
		_PostTweetWithImage(_text, _srcData, _srcData.Length, _lang);
	}
	
	// ラインに投稿する.
	// @param string _text : 投稿する文字列.
	[DllImport("__Internal")]
	private static extern void	_PostLine(string _text);
	public static void	PostLine(string _text)
	{
		_PostLine(_text);
	}
		
	// ラインに投稿する(画像付き).
	// @param string _text : 投稿する文字列.
	// @param string _localPath : 他のプラットフォームとあわせるため. iOSでは常にnull予定.
	// @param byte[] _pngData : pngのデータ.
	[DllImport("__Internal")]
	private static extern void	_PostLineWithImage(string _text, byte[] _pngImage, int _length);
	public static void	PostLine(string _text, string _localPath, byte[] _pngData)
	{
		Debug.Log("a");
		MemoryStream _ms = new MemoryStream(_pngData);
	Debug.Log("b");
		BinaryWriter _bw = new BinaryWriter(_ms);
	Debug.Log("c");
		_bw.Flush();
	Debug.Log("d");
		byte[] _srcData = _ms.ToArray();
	Debug.Log("e");	
		_bw.Close();
	Debug.Log("f");	
		_ms.Close();
	Debug.Log("g");		
		_PostLineWithImage(_text, _srcData, _srcData.Length);
	}
	
	// ツイートできる状態にあるかどうか(認証したかどうかチェック).
	// @retval true : 問題無し.
	[DllImport("__Internal")]
	private static extern bool	_isAccessTwitter();
	public static bool	IsAccessTwitter() {
		return _isAccessTwitter();
	}
		
	// iOS側のネイティブ昨日のアラートビューを表示する.
	// Androidは何もしない.
	// @param _title : タイトル.
	// @param _msg : メッセージ.
	[DllImport("__Internal")]
	private static extern bool	_AlertView(string _title, string _msg);
	public static void	AlertView(string _title, string _msg)
	{
		_AlertView(_title, _msg);
	}

#else
	// オブジェクトの取得のみの初期化処理.
	public static void	Initialize ()
	{

	}
	
	// 認証のリクエスト. 
	public static void	OAuthRequest ()
	{

	}
	
	// ツイートを投稿する(テキストonly).
	// @param string _text : 投稿する文字列.
	// @param string _lang : 言語.
	public static void	PostTweet (string _text, string _lang)
	{

	}
	
	// 画像有りでツイートする.
	// @param string _text : 投稿する文字列.
	// @param byte[] _pngBytes : 投稿する画像.
	// @param string _lang : 言語.
	public static void	PostTweet(string _text, byte[] _pngBytes, string _lang)
	{
		
	}
	
	// ラインに投稿する.
	// @param string _text : 投稿する文字列.
	public static void	PostLine(string _text)
	{
		
	}
		
	// ラインに投稿する(画像付き).
	// @param string _text : 投稿する文字列.
	// @param string _localPath : Android用.
	// @param byte[] _pngData : iOS用.
	public static void	PostLine(string _text, string _localPath, byte[] _pngData)
	{
		
	}
	
	// ツイートできる状態にあるかどうか(認証したかどうかチェック).
	// @retval true : 問題無し.
	public static bool	IsAccessTwitter() {
		return true;
	}
		
	public static void	AlertView(string _title, string _msg)
	{
	}
		
	// レビューダイアログを表示する.
	// @param string _layout : レイアウトファイル(.xml抜き).
	// @param string _mailTitle : 苦情を送る際のメールタイトル.
	// @param string _mailAddress : 苦情の送り先アドレス.
	// @param string _reviewPath : GooglePlayへのパス.
	// @param string _mainText : レビューに表示する為のテキスト. 0:main, 1:comp, 2:review, 3:close.
	public static void	ViewReviewDialog(string _layout, string _mailTitle, string _mailAddress, string _reviewPath, string[] _str) {
		
	}
	
	// ダイアログで何を押されたかを判定する.
	// @retval 0 : 表示中. 1:キャンセル. 2:レビュボタンが押された.
	public static int	GetReviewDialogState() {
		return 2;
	}
	
	// 問い合わせ用..
	// @param string _mailTitle : 苦情を送る際のメールタイトル.
	// @param string _mailAddress : 苦情の送り先アドレス.
	// @param string _mainText : 本文.
	public static void	SendFeedback(string _mailTitle, string _mailAddress, string _mainText) {
	}
#endif
}
