using System;

namespace LeetCode
{
    public class Solution
    {
        public int SingleNumber(int[] nums)
        {
            int ans = 0;         
            foreach (int num in nums)
            {
                ans ^= num;
            }
            return ans;
        }
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.WriteLine(s.SingleNumber(new int[] {
                0, 0, 1, 1, 2, 3, 3, 4, 4, 5, 5 }));
        }
    }
}
