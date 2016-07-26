using System;

namespace LeetCode
{
    public class Solution
    {
        public int ClimbStairs(int n)
        {
            int a = 1;
            int b = 1;
            for (int i = 2; i < n + 1; i++)
            {
                int temp = a + b;
                a = b;
                b = temp;
            }
            return b;
        }

        //Testcase
        static void Main(string[] args)
        {
            Solution s = new Solution();
            int stair_num = new Random().Next(1, 21);
            Console.Write("Number of layers: " + stair_num +
                "\tNumber of steps: " + s.ClimbStairs(stair_num));           
        }
    }
}