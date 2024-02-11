using System;
using System.Collections.Generic;
using System.IO;

namespace ClubClass
{
    class Program
    {
        static List<string> stringList = new List<string>();
        static List<string> checkList = new List<string>();

        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split();
            int n = int.Parse(input[0]);
            int m = int.Parse(input[1]);

            for (int i = 0; i < n; i++)
            {
                string list = Console.ReadLine();
                stringList.Add(list);
            }

            for (int i = 0; i < m; i++)
            {
                string check = Console.ReadLine();
                checkList.Add(check);
            }

            int count = 0;

            for (int i = 0; i < checkList.Count; i++)
            {
                for (int j = 0; j < stringList.Count; j++)
                {
                    if(checkList[i] == stringList[j])
                    {
                        count++;
                        break;
                    }
                }
            }

            Console.WriteLine(count);
        }
    }
}