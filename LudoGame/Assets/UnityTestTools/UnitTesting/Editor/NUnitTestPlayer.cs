using UnityEngine;
using System.Collections;
using NUnit.Framework;

[TestFixture]
public class NUnitTestPlayer  {
	[Test]
	public void GameShouldHaveABoard(){
		LudoGame lg = new LudoGame ();
		float x = lg.GetSquareX (0);
		Assert.AreEqual (65f, 17f);
	}
}
