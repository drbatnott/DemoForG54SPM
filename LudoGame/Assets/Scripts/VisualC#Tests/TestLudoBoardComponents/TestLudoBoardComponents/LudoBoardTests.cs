using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using ClassLibrary1;

namespace TestLudoBoardComponents
{
    [TestClass]
    public class LudoBoardTests
    {
        [TestMethod]
        public void SquareShouldConstructWithLocationAndEmptyContent()
        {
            Vector3 v = new Vector3(100f, 100f, -10f);
            Square s = new Square(v);
            Assert.IsNotNull(s);
        }
        [TestMethod]
        public void NewSquareShouldHaveEmptyState()
        {
            Vector3 v = new Vector3(100f, 100f, -10f);
            Square s = new Square(v);
            string state = s.State;
            Assert.AreEqual("n",state);
        }
    }
}
