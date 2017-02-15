using UnityEngine;
using System.Collections;

public class Board : MonoBehaviour {
	public GameObject squareProto;
	float [] xValues; //= {64f,64f,52f,40f,28f,16f, 4f, 4f, 4f, 4f, 4f, 4f, 4f,-8f,-20f,-20f,-20f,-20f,-20f,-20f,-20f};
	float [] yValues; //= { 0f,12f,12f,12f,12f,12f,12f,24f,36f,48f,60f,72f,84f,84f, 84f, 72f, 60f, 48f, };
	int noSquares = 13;
	GameObject [] squares;
	// Use this for initialization
	void Start () {
		xValues = new float[noSquares];
		yValues = new float[noSquares];
		setXValues ();
		setYValues ();
		squares = new GameObject[noSquares];
		float zed = squareProto.transform.position.z;
		for (int i = 0; i < noSquares; i++) {
			squares[i] = GameObject.Instantiate(squareProto);
			if(i < xValues.Length){
				squares[i].transform.position = new Vector3(
														xValues[i],yValues[i],zed);
			}
		}
	}
	void setXValues(){
		int i;
		xValues [0] =  64f;
		for (i = 0; i <6; i++) {
			xValues[i+1] = xValues[0] - 12f * i;
		}
		for (i = 7; i < 13; i++) {
			xValues[i] = xValues[6];
		}
	}
	void setYValues(){
		int i;
		yValues [0] =  0f;
		for (i = 1; i <7; i++) {
			yValues[i] = 12f;
		}
		for (i = 1; i < 6; i++) {
			yValues[i+6] = yValues[6] + 12f * i;
		}
	}
	// Update is called once per frame
	void Update () {
	
	}
}
