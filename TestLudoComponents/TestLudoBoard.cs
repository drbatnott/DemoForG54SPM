using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using UnityEngine;

namespace TestLudoComponents
{
    [TestClass]
    public class TestLudoBoard
    {
        [TestMethod]
        public void BoardExits()
        {
            LudoGame lg = new LudoGame();
            
            Assert.IsNotNull(lg);
        }
    }
}
