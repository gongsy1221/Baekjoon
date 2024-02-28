using System;

namespace baekjoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split();
            string[] input2 = Console.ReadLine().Split();
            
            int card = int.Parse(input[0]);
            int maxnum = int.Parse(input[1]);

            int max = 0;
            int[] cardnum = new int[card];

            for (int i = 0; i < card; i++)
            {
                cardnum[i] = int.Parse(input2[i]); 
            }

            for (int i = 0; i < card; i++)
            {
                for (int j = i + 1; j < card; j++)
                {
                    for (int k = j+1; k < card; k++)
                    {
                        int sum = cardnum[i] + cardnum[j] + cardnum[k];

                        if (sum <= maxnum && max < sum) max = sum;
                    }
                }
            }

            Console.WriteLine(max);
        }
    }
}