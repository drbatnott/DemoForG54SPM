using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.UI;

public class GamePlay : MonoBehaviour {
    Vector3[] theTrack;
    public GameObject textHolder;
    public GameObject player;
    public GameObject dice;
    Animator anim;
    Vector3 offset = Vector3.zero;
    float cellSpace = 0.626f;
    Vector3 startPosition; 
    int p = 0;
    Text test;
    float[] xOffs;
    float[] yOffs;
    int kount = 0;
    int lount = 0;
    bool done = false;
    bool myGo;
    int playerpos = 1;
	// Use this for initialization
	void Start () {
        test = textHolder.GetComponent<Text>();
        SetupTrack();
        anim = dice.GetComponent<Animator>();
        myGo = true;
        player.transform.position = theTrack[playerpos];
  	}
    /**
     * make the 52 square Ludo Board
     * */
    void SetupTrack()
    {
        theTrack = new Vector3[52];
        startPosition = new Vector3(-0.64f, -3.53f, -1.3f);
        int n = 0;

        float[] xOffs = { 0f, -cellSpace, cellSpace, -cellSpace, cellSpace,0f,cellSpace,0f,cellSpace
                        ,-cellSpace,cellSpace,-cellSpace,0f,-cellSpace};
        float[] yOffs = { cellSpace, 0f, cellSpace, 0f, cellSpace,-cellSpace, cellSpace,-cellSpace
                        ,0f ,-cellSpace,0f,-cellSpace,cellSpace};
        this.yOffs = yOffs;
        this.xOffs = xOffs;
        offset = new Vector3(xOffs[kount++], yOffs[lount++], 0f);//0
        n = LRows(n);
        n = NextBit(n, 1);//12
        offset.x = xOffs[kount++];
        offset.y = yOffs[lount++];
        startPosition += offset;
        offset.x = xOffs[kount++];
        n = LRows(n);
        n = NextBit(n, 1);//25
        offset.y = yOffs[lount++];
        offset.x = xOffs[kount++];
        startPosition += offset;
        offset.y = yOffs[lount++];
        n = LRows(n);
        n = NextBit(n, 1);//38
        offset.x = xOffs[kount++];
        offset.y = yOffs[lount++];
        startPosition += offset;
        offset.x = xOffs[kount++];
        n = LRows(n);
        n = NextBit(n, 1);//51
    }
    /**
     * Doing a row or a column
     * 
     * */
    int NextBit(int n, int m = 6)
    {
         for (int i = 0; i < m; i++)
        {         
            theTrack[n++] = startPosition;
            startPosition += offset;
        }
         return n;
    }
    /**
     * doing one vertical and one horizontal row
     * using NextBit 
     * */
    int LRows(int n)
    {
        for (int i = 0; i < 2; i++)
        {
            n = NextBit(n);//5
            offset.x = xOffs[kount++];//1
            offset.y = yOffs[lount++];
            startPosition += offset;
        }
        return n;
    }
	// Update is called once per frame
	void Update () {
        //for(int i = 0; i < 6; i++)
        if (myGo)
        {
            if (Input.GetKeyDown(KeyCode.Return))
            {
                int show = DiceReal.Roll();
                //anim.SetInteger("Face", 0);
                anim.SetInteger("Face", show);
                playerpos += show;
                player.transform.position = theTrack[playerpos];
                test.text = "Roll of " + show;
                myGo = false;
            }
        }
        else
        {
            if (Input.GetKeyUp(KeyCode.Return))
            {
                anim.SetInteger("Face", 0);
                myGo = true;

            }
        }
	}
}
