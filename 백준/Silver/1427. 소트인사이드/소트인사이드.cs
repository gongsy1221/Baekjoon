using System;

namespace baekjoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            int[] num = new int[input.Length];
            string result ="";

            for (int i = 0; i < input.Length; i++)
            {
                num[i] = int.Parse(input[i].ToString());
            }

            Array.Sort(num);
            Array.Reverse(num);

            for (int i = 0; i < num.Length; i++)
            {
                result += num[i].ToString();
            }

            Console.WriteLine(result);
        }
    }
}