using System;

namespace baekjoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num = int.Parse(Console.ReadLine());
            int count = 1;
            int sum = 666;

            while(num != count)
            {
                ++sum;

                if (Convert.ToString(sum).Contains("666"))
                    ++count;
            }

            Console.WriteLine(sum);
        }
    }
}