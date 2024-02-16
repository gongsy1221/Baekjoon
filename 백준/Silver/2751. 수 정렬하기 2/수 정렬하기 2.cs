using System;
using System.Text;

namespace _1000jun
{
    internal class Program
    {
        static void Main(string[] args)
        {
            StringBuilder sb = new StringBuilder();
            int num = int.Parse(Console.ReadLine());
            int[] nums = new int[num];

            for (int i = 0; i < num; i++)
            {
                nums[i] = int.Parse(Console.ReadLine());
            }

            Array.Sort(nums);

            for (int i = 0; i < nums.Length; i++)
            {
                sb.Append(nums[i] + "\n");
            }

            Console.WriteLine(sb);
        }
    }
}