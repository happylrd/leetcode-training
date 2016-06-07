using System;

namespace LeetCode
{
    public class Solution
    {
        public bool IsPowerOfTwo(int n)
        {
            return n > 0 && (n & (n - 1)) == 0;
        }
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.Write(s.IsPowerOfTwo(8));
        }
    }
}
