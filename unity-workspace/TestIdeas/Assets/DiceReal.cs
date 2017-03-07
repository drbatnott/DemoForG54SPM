using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DiceReal  {
    DiceReal()
    {
        int i = (int)(1000 * Time.deltaTime);
        UnityEngine.Random.InitState(i);
    }

	public static int Roll()
    {
        return UnityEngine.Random.Range(1, 4);
    }
	
}
