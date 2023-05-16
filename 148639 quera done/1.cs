using System;

namespace AP2
{
    class AP21
    {
        static void Func(int n,int i)
        {
            if (n <= 1)
            {
                Console.Write(i);
                return;
            }
            Console.Write(i + "+\\frac{");
            n--;
            i *= 2;
            Func(n, i);
            Console.Write("}{");
            Func(n, i + 1);
            Console.Write("}");
            
        }

        static int Main()
        {
            int n = int.Parse(Console.ReadLine());
            Func(n, 1);
            return 0;
        }
    }
}