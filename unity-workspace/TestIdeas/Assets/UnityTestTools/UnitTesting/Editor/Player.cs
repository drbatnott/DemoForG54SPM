using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace Assets.UnityTestTools.UnitTesting.Editor
{
    class Player : MonoBehaviour
    {
        public GameObject thePlayer;
        Vector3 position;
        Transform t;
        public Player()
        {
            
            t = thePlayer.transform;
            position = t.position;
        }

    }
}
