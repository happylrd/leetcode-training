using System;
using System.Collections;

namespace LeetCode
{
    public class Solution
    {
        public int[] CountBits(int num)
        {
            ArrayList ans = new ArrayList();
            ans.Add(0);
            for (int i = 1; i <= num; i++)
            {
                ans.Add((int)ans[(i >> 1)] + (i & 1));
            }
            return (int[])ans.ToArray(typeof(int));
        }

        //Testcase
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.Write("Input the int: ");
            int[] temp = s.CountBits(
                Convert.ToInt32(Console.ReadLine()));
            Console.Write("[");
            for (int i = 0; i < temp.Length; i++)
            {
                Console.Write(temp[i]);
                if (i == temp.Length - 1)
                    break;
                Console.Write(",");
            }
            Console.Write("]");
        }
    }
}
