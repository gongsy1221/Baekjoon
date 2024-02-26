using System;

namespace baekjoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] cro = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
            string alpha = Console.ReadLine();

            for (int i = 0; i < cro.Length; i++)
            {
                alpha = alpha.Replace(cro[i], "*");
            }

            Console.WriteLine(alpha.Length);
        }
    }
}