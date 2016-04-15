using UnityEngine;
using System.Collections;

public class FBTestGUI : MonoBehaviour {

	FacebookManager m_FacebookManager=null;
	TwitterManager m_TwitterManager = null;
	int buttonNum = 8;
	Vector2 button; 
	float unitY;
	Vector2 margin;

	void Awake () 
	{
		m_FacebookManager = GameObject.Find ("FacebookManager").GetComponent<FacebookManager> ();
		m_TwitterManager  = GameObject.Find ("TwitterManager").GetComponent<TwitterManager> ();
		 
		margin = new Vector2 (10f, 50f);
		button = new Vector2 ((float)Screen.width - margin.x, (float)Screen.height / buttonNum);
		unitY  =(float)Screen.height/buttonNum;
	}

	float positionY(int num)
	{
		return (unitY * num) + margin.y;
	}

	void OnGUI() 
	{
		if (GUI.Button(new Rect(margin.x, positionY(0), button.x, button.y), "init"))
		{
			m_FacebookManager.FBinit ();
		}

		if (GUI.Button(new Rect(margin.x, positionY(1), button.x, button.y), "login"))
		{
			m_FacebookManager.FBlogin ();
		}

		if (GUI.Button(new Rect(margin.x, positionY(2), button.x, button.y), "take screenshot"))
		{
			StartCoroutine (m_FacebookManager.TakeScreenshot ());
		}

		if (GUI.Button(new Rect(margin.x, positionY(3), button.x, button.y), "twetter initialize"))
		{
			m_TwitterManager.Initialize ();
		}

		if (GUI.Button(new Rect(margin.x, positionY(4), button.x, button.y), "tweetWithScreenShot"))
		{
			m_TwitterManager.TweetWithScreenShot ();
		}

	}

}
