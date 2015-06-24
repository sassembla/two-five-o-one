using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class EntryPoint : MonoBehaviour {
	void Awake () {
		// Application.add_logMessageReceived() += 
		Application.logMessageReceived += HandleLog;
	}

	void HandleLog(string logString, string stackTrace, LogType type) {
		
    }
}
