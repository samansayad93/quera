using System;
using System.Collections.Generic;

class Program
{
    static int Main()
    {
        List<int> lis = new List<int>();
        int n = int.Parse(Console.ReadLine());
        string[] input = Console.ReadLine().Split(' ');
        string[] input2 = Console.ReadLine().Split(' ');
        for(int i = 0; i < n; i++)
        {
            if (input2[i] == "1")
            {
                lis.Add(int.Parse(input[i]));
            }
        }
        lis.Sort();
        for(int i = 0; i < lis.Count; i++)
        {
            Console.Write(lis[i] + " ");
        }
        return 0;
    }
}