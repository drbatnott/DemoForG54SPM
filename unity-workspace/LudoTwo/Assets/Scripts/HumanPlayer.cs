using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HumanPlayer : MonoBehaviour {
    //public GameObject theDice;
	// Use this for initialization
    int roll;
	void Start () {
		//theDice
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetKeyDown(KeyCode.Space)){
            
            roll  = DiceReal.Roll();
            
        }
        if (Input.GetKeyDown(KeyCode.KeypadEnter))
        {
            DiceReal.anim.SetInteger("FaceToShow", 9);
        }
	}
}
