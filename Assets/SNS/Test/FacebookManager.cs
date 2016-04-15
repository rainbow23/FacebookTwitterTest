using UnityEngine;
using System.Collections;

public class FacebookManager : MonoBehaviour {

	void Awake()
	{
		//FBinit();
	}

	public void FBinit()
	{
		Facebook.InitDelegate _onComplete = (() =>{
			//add code...
			Debug.Log ("On Complete");
		});

		if(FB.IsInitialized == false){
			FB.Init(_onComplete);
		}
		else {
			_onComplete();
		}

	}	

	public void FBlogin()
	{
		if(FB.IsLoggedIn){return;}

		FB.Login ("email,publish_actions", (_result) =>{
			if (!string.IsNullOrEmpty (_result.Error)){
				Debug.Log ("!! FB Login Error : " + _result.Error);
			}
			else{
				if(FB.IsLoggedIn){
					Debug.Log("FB login worked! " + _result.Text);
				}
				else{
					Debug.Log("FB Login Cancel");
				}
			}
		});
	}

	public IEnumerator TakeScreenshot()
	{
		yield return new WaitForEndOfFrame();

		var width = Screen.width;
		var height = Screen.height;
		var tex = new Texture2D(width, height, TextureFormat.RGB24, false);
		// Read screen contents into the texture
		tex.ReadPixels(new Rect(0, 0, width, height), 0, 0);
		tex.Apply();
		byte[] screenshot = tex.EncodeToPNG();

		var wwwForm = new WWWForm();
		wwwForm.AddBinaryData("image", screenshot, "InteractiveConsole.png");
		wwwForm.AddField("message", "herp derp.  I did a thing!  Did I do this right?");

		FB.API("me/photos", Facebook.HttpMethod.POST, Callback, wwwForm);
	}

	private void Callback(FBResult result)
	{
		string lastResponseTexture = null;
		// Some platforms return the empty string instead of null.
		if (!string.IsNullOrEmpty (result.Error))
		{
			lastResponseTexture = "Error Response:\n" + result.Error;
		}
		else if (!string.IsNullOrEmpty (result.Text))
		{
			lastResponseTexture = "Success Response:\n" + result.Text;
		}
		else if (result.Texture != null)
		{
			lastResponseTexture = "Success Response: texture\n";
		}
		else
		{
			lastResponseTexture = "Empty Response\n";
		}

		Debug.Log("screenshot callback:" + lastResponseTexture);
	}

}
