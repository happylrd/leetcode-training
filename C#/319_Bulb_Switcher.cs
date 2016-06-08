using System;

namespace LeetCode
{
    public class Solution
    {
        public int BulbSwitch(int n)
        {
            return (int)Math.Sqrt(n);
        }

        //Testcase
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.Write(s.BulbSwitch(5));
            // final state: 1 0 0 1 0 , n = 2
        }
    }
}
