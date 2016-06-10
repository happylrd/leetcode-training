using System;

namespace LeetCode
{
    public class Solution
    {
        public bool IncreasingTriplet(int[] nums)
        {
            int a = int.MaxValue;
            int b = int.MaxValue;
            foreach (int elem in nums)
            {
                if (a >= elem)
                    a = elem;
                else if (b >= elem)
                    b = elem;
                else
                    return true;
            }
            return false;
        }

        //Testcase
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.Write(s.IncreasingTriplet(new int[] { 0, -1, 1, -3, 3 }));
        }
    }
}
