using System.Collections;

public class Square  {
    private ClassLibrary1.Vector3 position;
    private string state;

    public Square(ClassLibrary1.Vector3 v)
    {
        // TODO: Complete member initialization
        position = v;
        state = "n";
    }



    public string State { get { return "n"; } set { ;} }
}
