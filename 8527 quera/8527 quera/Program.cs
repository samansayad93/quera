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
            long sum = 0;
            for (long j = 1; j < n - 1; j++)
            {
                if (arr[j + 1] < arr[j - 1])
                {
                    if (arr[j] < arr[j + 1])
                    {
                        sum += arr[j + 1] - arr[j];
                        continue;
                    }
                }
                if (arr[j] < arr[j - 1])
                {
                    sum += arr[j - 1] - arr[j];
                }
            }
            Console.WriteLine(sum);
            return 0;
        }
    }
}