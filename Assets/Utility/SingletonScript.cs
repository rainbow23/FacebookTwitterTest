using UnityEngine;
using System.Collections;

// シングルトン自動生成用のクラス.
// Destroyは利用側で.
public class SingletonScript<T> : MonoBehaviour where T : MonoBehaviour{

	protected static T instance;
	
	public static T Instance {
		get {
			if (instance == null) {
				instance = (T)FindObjectOfType(typeof(T));	// FindObjectOfTypeのコストは高いけど初期化時に一回だけなので問題なし.

				if (instance == null) {
					// Debug.LogError("An instance of " + typeof(T) + " is needed in the scene, but there is none.");
				}
			}
			return instance;
		}
	}
}
