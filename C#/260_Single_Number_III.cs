using System;

namespace LeetCode
{
    public class Solution
    {
        public int[] SingleNumber(int[] nums)
        {
            int diff = 0;
            foreach(int num in nums)
            {
                diff ^= num;
            }

            // Divided into two groups according to the last non-zero bit
            diff &= -diff;

            int[] ans = {0, 0};
            foreach(int num in nums)
            {
                if ((num & diff) == 0)
                {
                    ans[0] ^= num;
                }
                else
                {
                    ans[1] ^= num;
                }
            }
            return ans;
        }

        //Testcase
        static void Main(string[] args)
        {
            Solution s = new Solution();
            int[] temp = s.SingleNumber(new int[] { 1, 2, 1, 3, 2, 5 });
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
