using System;

class Program
{
    public static char[,] field;
    static int n, m;
    static bool check(int x,int y,char v)
    {
        if (field[x-1,y-1] != '.')
        {
            return false;
        }
        for(int i = 0; i < m * n; i++)
        {
            if (field[i, y-1] == v || field[x-1,i] == v)
                return false;
        }
        int X = (x - 1) / n;
        int Y = (y - 1) / m;
        for(int i = X * n; i < X * n + n; i++)
        {
            for(int j = Y * m; j < Y * m + m; j++)
            {
                if (field[i,j] == v)
                    return false;
            }
        }
        field[x - 1, y - 1] = v;
        return true;
    }

    static void Print()
    {
        for(int i = 0; i < n * m; i++)
        {
            for(int j = 0; j < n * m; j++)
            {
                Console.Write(field[i, j]);
            }
            Console.WriteLine();
        }
    }

    static int Main()
    {
        string[] input = Console.ReadLine().Split(' ');
        bool flag = false;
        n = int.Parse(input[0]);
        m = int.Parse(input[1]);
        field = new char[n * m, n * m];
        for(int i = 0; i < n * m; i++)
        {
            for(int j = 0; j < m * n; j++)
            {
                field[i, j] = '.';
            }
        }
        int k = int.Parse(Console.ReadLine());
        for(int i = 0; i < k; i++)
        {
            input = Console.ReadLine().Split(' ');
            if (flag == false)
            {
                Console.WriteLine("player 1:");
            }
            else
            {
                Console.WriteLine("player 2:");
            }
            if (check(int.Parse(input[0]), int.Parse(input[1]), char.Parse(input[2])) == false)
            {
                Console.WriteLine("invalid move");
            }
            else
            {
                Print();
                flag = !flag;
            }
        }
        return 0;
    }
}