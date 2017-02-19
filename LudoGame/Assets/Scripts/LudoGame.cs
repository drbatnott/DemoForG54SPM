using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class LudoGame : MonoBehaviour
{
    Board theBoard = new Board();

	float GetSquareX(int p){
		return theBoard.GetSquareX (p);
	}

}
