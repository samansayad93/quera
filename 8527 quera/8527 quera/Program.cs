using System;

namespace Quera
{
    class Program
    {
        static long Max(long[] arr)
        {
            long max = arr[0];
            for (long i = 1; i < arr.Length; i++)
            {
                if (arr[i] > max)
                {
                    max = arr[i];
                }
            }
            return max;
        }
        static int Main()
        {
            long n = long.Parse(Console.ReadLine());
            string[] str = Console.ReadLine().Split(' ');
            long[] arr = new long[n];
            for (long j = 0; j < n; j++)
            {
                arr[j] = int.Parse(str[j]);
            }
            long max = Max(arr);
            long i = 0;
            long sum = 0;
            while (arr[i] != max)
            {
                sum += arr[i];
                i++;
            }
            sum = (max * i) - sum;
            Console.WriteLine(sum);
            return 0;
        }
    }
}