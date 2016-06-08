using System;

namespace LeetCode
{
    public class Solution
    {
        public int MissingNumber(int[] nums)
        {
            int n = nums.Length;
            int sum = 0;
            foreach(int num in nums)
            {
                sum += num;
            }
            return n * (n + 1) / 2 - sum;
        }

        public int MissingNumber2(int[] nums)
        {
            int a = 1, b = 1;
            foreach(int num in nums)
            {
                a ^= num;
            }
            for (int i = 0; i < nums.Length + 1; i++)
            {
                b ^= i;
            }
            return a ^ b;
        }

        //Testcase
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.Write(s.MissingNumber(new int[] { 0, 1, 3 }));
        }
    }
}
