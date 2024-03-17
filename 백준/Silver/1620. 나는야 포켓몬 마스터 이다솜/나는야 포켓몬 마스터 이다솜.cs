using System;
using System.Collections.Generic;
using System.IO;

namespace ClubClass
{
    class Program
    {
        private static Dictionary<string, int> stringDictionary = new Dictionary<string, int>();
        private static Dictionary<int, string> intDictionary = new Dictionary<int, string>();

        static void Main(string[] args)
        {
            StreamReader sr = new StreamReader(Console.OpenStandardInput());
            StreamWriter sw = new StreamWriter(Console.OpenStandardOutput());

            int a = 0;
            string[] nm = sr.ReadLine().Split();
            int n = int.Parse(nm[0]);
            int m = int.Parse(nm[1]);

            for (int i = 1; i < n + 1; i++)
            {
                string input = sr.ReadLine();

                stringDictionary.Add(input, i);
                intDictionary.Add(i, input);
            }

            string[] problem = new string[m];

            for (int i = 0; i < m; i++)
            {
                problem[i] = sr.ReadLine();
            }

            for (int i = 0; i < m; i++)
            {
                if (int.TryParse(problem[i], out a))
                {
                    string val = intDictionary[int.Parse(problem[i])];

                    sw.WriteLine(val);
                }
                else
                {
                    int val = stringDictionary[problem[i]];

                    sw.WriteLine(val);
                }
            }

            sw.Close();
            sr.Close();
        }
    }
}