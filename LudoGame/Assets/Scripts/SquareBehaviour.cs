using UnityEngine;
using System.Collections;

public class SquareBehaviour  {
    Vector3 position;
    private string state;

    public SquareBehaviour(Vector3 v)
    {
        // TODO: Complete member initialization
        position = v;
        state = "n";
    }



    public string State { get { return "n"; } set { state = value;} }
}
