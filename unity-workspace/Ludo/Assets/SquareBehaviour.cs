using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SquareBehaviour : MonoBehaviour {
    bool moveRight;
    float speed = 2.0f;
	// Use this for initialization
	void Start () {
        moveRight = false;
	}
	
	// Update is called once per frame
	void Update () {
        Vector3 pos = transform.position;
        if (moveRight)
        {
            pos.x += speed * Time.deltaTime;
        }
	}
    public bool Move
    {
        get { return moveRight; }
        set { moveRight = value; }
    }
}
