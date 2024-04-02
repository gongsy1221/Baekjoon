using System;

namespace baekjoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num = int.Parse(Console.ReadLine());

            int pay = 1000 - num;
            int cnt = 0;

            while (pay > 0)
            {
                if (pay>= 500)
                { 
                    pay -=500;
                    cnt++;
                }
                else if(pay >= 100)
                {
                    pay -= 100;
                    cnt++;
                }
                else if (pay >= 50)
                {
                    pay -= 50;
                    cnt++;
                }
                else if (pay >= 10)
                {
                    pay -= 10;
                    cnt++;
                }
                else if (pay >= 5)
                {
                    pay -= 5;
                    cnt++;
                }
                else
                {
                    pay -= 1;
                    cnt++;
                }
            }

            Console.WriteLine(cnt);
        }
    }
}