using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerBehaviour : MonoBehaviour {
    public GameObject dice;
    static Animator diceAnim;
    public static bool myGo = true;
	// Use this for initialization
	void Start () {
        diceAnim = dice.GetComponent<Animator>();
        diceAnim.SetInteger("Face", 0);
	}
	
	// Update is called once per frame
	void Update () {
       
	}

    public static void TakeGo()
    {
        int i = DiceReal.Roll();
        Debug.Log("rolled a " + i);
        diceAnim.SetInteger("Face", i);
        myGo = false;
    }
}
