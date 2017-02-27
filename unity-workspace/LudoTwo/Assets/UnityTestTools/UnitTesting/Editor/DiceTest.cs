using UnityEngine;
using UnityEditor;
using NUnit.Framework;

public class DiceTest {

	[Test]
	public void EditorTest() {
		//Arrange
		var player = new GameObject();

		//Act
		//Try to rename the GameObject
		var newGameObjectName = "Player";
		player.name = newGameObjectName;
		//Assert
		//The object has a new name
		Assert.AreEqual(newGameObjectName, player.name);
	}
    [Test]
    public void DiceTestMember()
    {
        //Assert new dice throws number between 1 and 6
        Dice d = new Dice();
        int i = d.Roll();
        Assert.True(i > 0 && i <=6);
    }
    [Test]
    public void DiceTestPlayer()
    {
        Vector3 [] places =  { Vector3.zero, new Vector3(1f,0f,0f), new Vector3(2f,0f,0f),
                             new Vector3(3f,0f,0f), new Vector3(4f,0f,0f),
                             new Vector3(5f,0f,0f)};
        //Arrange
        var player = new GameObject();
        Dice d = new Dice();
        //Throw dice
        Vector3 p = player.transform.position;      
        int i = d.Roll();
        player.transform.position = places[i-1];
        //Assert
        //The object has a new name
        int x1 = (int)player.transform.position.x;
        int x2 = (int)places[i - 1].x;
        Assert.True(x1 == x2);
    }
}
