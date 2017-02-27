using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

public class DiceReal : MonoBehaviour{
    public static Animator anim;
	public static int roll;
    bool spacePressed = false;
    
    public DiceReal()
    {
        
    }
    public void Start()
    {
        anim = GetComponent<Animator>();
        
    }
    public static int Roll()
    {
        anim.SetInteger("FaceToShow", 7);
        roll = UnityEngine.Random.Range(0,6) + 1;
        anim.SetInteger("FaceToShow", roll);
        return roll;
    }
   
}
