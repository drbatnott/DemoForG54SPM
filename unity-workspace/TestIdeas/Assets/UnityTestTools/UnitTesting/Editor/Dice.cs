using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace Assets.UnityTestTools.UnitTesting.Editor
{
    class Dice
    {

        internal int Roll()
        {
            return UnityEngine.Random.Range(1,6);
        }
    }
}
