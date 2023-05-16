using System;
using System.Collections.Generic;
using System.Linq;

namespace Quera
{
    
    class Band
    {
        public bool status;
        public string num;
        public Band()
        {
            num = "";
            status = false;
        }
    }
    class Plane
    {
        public string ID;
        public int Status;
        public Plane(string ID)
        {
            this.ID = ID;
            Status = 1;
        }
        public Plane(string ID, int s)
        {
            this.ID = ID;
            Status = s;
        }
    }
    class Airport
    {
        static public List<Plane> planes = new List<Plane>();
        static public List<Band> bands = new List<Band>();
        static public void Check(string ID)
        {
            for (int i = 0; i < planes.Count; i++)
            {
                if (planes[i].ID == ID)
                {
                    return;
                }
            }
            planes.Add(new Plane(ID, 4));
        }
        static public void TakeOff(string ID)
        {
            var result = from p in planes where p.ID == ID select p;
            foreach (var p in result)
            {
                if (p.Status == 4)
                {
                    Console.WriteLine("YOU ARE NOT HERE");
                    return;
                }
                if (p.Status == 3)
                {
                    Console.WriteLine("YOU ARE LANDING NOW");
                    return;
                }
                if (p.Status == 2)
                {
                    Console.WriteLine("YOU ARE TAKING OFF");
                    return;
                }
                if (p.Status == 1)
                {
                    for (int i = 0; i < bands.Count; i++)
                    {
                        if (bands[i].status == false)
                        {
                            bands[i].status = true;
                            bands[i].num = p.ID;
                            p.Status = 2;
                            return;
                        }
                    }
                    Console.WriteLine("NO FREE BOUND");
                    return;
                }
            }
        }
        static public void Landing(string ID)
        {
            var result = from p in planes where p.ID == ID select p;
            foreach (var p in result)
            {
                if (p.Status == 1)
                {
                    Console.WriteLine("YOU ARE HERE");
                    return;
                }
                if (p.Status == 3)
                {
                    Console.WriteLine("YOU ARE LANDING NOW");
                    return;
                }
                if (p.Status == 2)
                {
                    Console.WriteLine("YOU ARE TAKING OFF");
                    return;
                }
                if (p.Status == 4)
                {
                    for (int i = bands.Count - 1; i >= 0; i--)
                    {
                        if (bands[i].status == false)
                        {
                            bands[i].status = true;
                            bands[i].num = p.ID;
                            p.Status = 3;
                            return;
                        }
                    }
                    Console.WriteLine("NO FREE BOUND");
                }
            }
        }
        static public void PlaneStatus(string ID)
        {
            var result = from p in planes where p.ID == ID select p;
            foreach (var p in result)
            {
                Console.WriteLine(p.Status);
            }
        }
        static public void BandStatus(int a)
        {
            if (bands[a - 1].num != "")
            {
                Console.WriteLine(bands[a - 1].num);
                return;
            }
            Console.WriteLine("FREE");
        }
    }
    class Project
    {
        static int Main()
        {
            string[] str = Console.ReadLine().Split(' ');
            int n = int.Parse(str[0]);
            int m = int.Parse(str[1]);
            for (int i = 0; i < m; i++)
            {
                Airport.bands.Add(new Band());
            }
            for (int i = 0; i < n; i++)
            {
                string tmp = Console.ReadLine();
                Airport.planes.Add(new Plane(tmp));
            }
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++)
            {
                str = Console.ReadLine().Split(' ');
                Airport.Check(str[1]);
                if (str[0] == "TAKE-OFF")
                {
                    Airport.TakeOff(str[1]);
                    continue;
                }
                if (str[0] == "LANDING")
                {
                    Airport.Landing(str[1]);
                    continue;
                }
                if (str[0] == "PLANE-STATUS")
                {
                    Airport.PlaneStatus(str[1]);
                    continue;
                }
                if (str[0] == "BAND-STATUS")
                {
                    Airport.BandStatus(int.Parse(str[1]));
                    continue;
                }
            }
            return 0;
        }
    }
}