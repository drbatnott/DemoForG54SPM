using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenerateTrack : MonoBehaviour {
    GameObject[] theTrack;
    public GameObject square;
    Vector3 offset = new Vector3(0f, 0f, 0.6f);
    Vector3 startPosition = new Vector3(-.61f,0f, -4.37f);
	// Use this for initialization
	void Start () {
        theTrack = new GameObject[52];

        int i;
        int n = 0;
        for (i = 0; i < 6; i++)
        {
            theTrack[n] = GameObject.Instantiate(square);
            float x = startPosition.x + (float) i *offset.x;
            float y = startPosition.y ;
            float z = startPosition.z + (float) i * offset.z;
            theTrack[n++].transform.localPosition = new Vector3(x,y,z);
        }
        offset = new Vector3(-0.6f, 0f, 0f);
        startPosition = new Vector3(-1.29f, 0f, -0.6f);
        for (i = 0; i < 6; i++)
        {
            theTrack[n] = GameObject.Instantiate(square);
            float x = startPosition.x + (float)i * offset.x;
            float y = startPosition.y;
            float z = startPosition.z + (float)i * offset.z;
            theTrack[n++].transform.localPosition = new Vector3(x, y, z);
        }
        theTrack[n] = GameObject.Instantiate(square);
        theTrack[n++].transform.localPosition = new Vector3(-4.37f, 0f, -0.043f);
        startPosition = new Vector3(-4.37f, 0f, 0.67f);
        offset = new Vector3(0.6f, 0f, 0f);
        for (i = 0; i < 6; i++)
        {
            theTrack[n] = GameObject.Instantiate(square);
            float x = startPosition.x + (float)i * offset.x;
            float y = startPosition.y;
            float z = startPosition.z + (float)i * offset.z;
            theTrack[n++].transform.localPosition = new Vector3(x, y, z);
        }
        startPosition = new Vector3(-0.62f, 0f, 1.24f);
        offset = new Vector3(0f, 0f, 0.6f);
        for (i = 0; i < 6; i++)
        {
            theTrack[n] = GameObject.Instantiate(square);
            float x = startPosition.x + (float)i * offset.x;
            float y = startPosition.y;
            float z = startPosition.z + (float)i * offset.z;
            theTrack[n++].transform.localPosition = new Vector3(x, y, z);
        }
        startPosition = new Vector3(-0.06f, 0f, 4.32f);
        offset = new Vector3(0f, 0f, -0.6f);
        theTrack[n] = GameObject.Instantiate(square);
        theTrack[n++].transform.localPosition = startPosition;
        startPosition.x += 0.6f;
        for (i = 0; i < 6; i++)
        {
            theTrack[n] = GameObject.Instantiate(square);
            float x = startPosition.x + (float)i * offset.x;
            float y = startPosition.y;
            float z = startPosition.z + (float)i * offset.z;
            theTrack[n++].transform.localPosition = new Vector3(x, y, z);
        }
        startPosition = new Vector3(1.23f, 0f, 0.62f);
        offset = new Vector3(0.6f, 0f, 0f);
        for (i = 0; i < 6; i++)
        {
            theTrack[n] = GameObject.Instantiate(square);
            float x = startPosition.x + (float)i * offset.x;
            float y = startPosition.y;
            float z = startPosition.z + (float)i * offset.z;
            theTrack[n++].transform.localPosition = new Vector3(x, y, z);
        }
        startPosition = new Vector3(4.42f, 0f, 0f);
        offset = new Vector3(-0.6f, 0f, 0f);
        theTrack[n] = GameObject.Instantiate(square);
        theTrack[n++].transform.localPosition = startPosition;
        startPosition.z -= 0.6f;
        for (i = 0; i < 6; i++)
        {
            theTrack[n] = GameObject.Instantiate(square);
            float x = startPosition.x + (float)i * offset.x;
            float y = startPosition.y;
            float z = startPosition.z + (float)i * offset.z;
            theTrack[n++].transform.localPosition = new Vector3(x, y, z);
        }
        startPosition = new Vector3(0.66f, 0f, -1.27f);
        offset = new Vector3(0f, 0f, -0.6f);
        for (i = 0; i < 6; i++)
        {
            theTrack[n] = GameObject.Instantiate(square);
            float x = startPosition.x + (float)i * offset.x;
            float y = startPosition.y;
            float z = startPosition.z + (float)i * offset.z;
            theTrack[n++].transform.localPosition = new Vector3(x, y, z);
        }
        startPosition = new Vector3(0f, 0f, -4.39f);
        theTrack[n] = GameObject.Instantiate(square);
        theTrack[n].transform.localPosition = startPosition;
	}

    // Update is called once per frame
    void Update()
    {
		
	}
}
