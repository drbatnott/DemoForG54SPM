using System;
using System.Collections.Generic;
using System.Threading;
using NUnit.Framework;
using UnityEngine;
using Assets.UnityTestTools.UnitTesting.Editor;

namespace UnityTest
{
    [TestFixture]
    [Category("MyTest")]
    internal class DiceTests
    {
        [Test]
        public void DiceCanRoll()
        {
            //GameObject go = new GameObject();
            Dice d = new Dice();
            int n = d.Roll();
            Assert.GreaterOrEqual(n, 1);
            Assert.LessOrEqual(n, 6);
        }
        [Test]
        public void GOCanBeMoved()
        {
            Vector3 end = new Vector3(1f, 0f, 0f);
            GameObject go = new GameObject();
            Dice d = new Dice();
            int n = d.Roll();
            end.x *= n;
            go.transform.position = end;
            Assert.AreEqual(go.transform.position,end);
            
        }
        [Test]
        public void PlayerCanBeMoved()
        {
            Vector3 end = new Vector3(1f, 0f, 0f);
            Player go = new Player();
            Dice d = new Dice();
            int n = d.Roll();
            end.x *= n;
            go.transform.position = end;
            Assert.AreEqual(go.transform.position, end);

        }
    }
}
