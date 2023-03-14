using System;

namespace Quera
{
    class Program
    {
        static int Main()
        {
            string[] input = Console.ReadLine().Split('e');
            string a = input[0];
            int b = int.Parse(input[1]);
            int output = 0;
            for (int i = 0; i < a.Length; i++)
            {
                switch (a[i])
                {
                    case '0':
                        output += 6;
                        break;
                    case '1':
                        output += 2;
                        break;
                    case '2':
                        output += 5;
                        break;
                    case '3':
                        output += 5;
                        break;
                    case '4':
                        output += 4;
                        break;
                    case '5':
                        output += 5;
                        break;
                    case '6':
                        output += 6;
                        break;
                    case '7':
                        output += 4;
                        break;
                    case '8':
                        output += 7;
                        break;
                    case '9':
                        output += 6;
                        break;
                    default:
                        break;
                }
            }
            output += 6 * b;
            Console.WriteLine(output);
            return 0;
        }
    }
}