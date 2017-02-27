using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public class Dice
{
    int roll;
    Random r;
    public Dice()
    {
        r = new Random(DateTime.Today.Second);
    }

    public int Roll()
    {
        roll = r.Next(6) + 1;
        return roll;
    }
}
