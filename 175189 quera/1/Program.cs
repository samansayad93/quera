using System;
using System.Collections.Generic;

class Program
{
    static int Main()
    {
        int n = int.Parse(Console.ReadLine());
        string[] input = Console.ReadLine().Split(' ');
        List<int> arr = new List<int>();
        for(int i = 0; i < n + 2; i++)
        {
            arr.Add(int.Parse(input[i]));
        }
        arr.Sort();
        for(int i = n; i >= 0; i--)
        {
            int tmp = 0;
            for(int j = 0; j < n; j++)
            {
                tmp += arr[j];
                if(tmp == arr[i])
                {
                    Console.WriteLine(arr[i] + " " + arr[n + 1]);
                    return 0;
                }
                if(tmp > arr[i])
                {
                    break;
                }
            }
        }
        return 0;
    }
}