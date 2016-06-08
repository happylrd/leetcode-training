using System;

namespace LeetCode
{
    public class Solution
    {
        public int IntegerBreak(int n)
        {
            int div = n / 3;
            if (div <= 1)
            {
                return (n / 2) * (n / 2 + n % 2);
            }

            int mod = n % 3;
            if (mod == 0)
            {
                return (int)Math.Pow(3, div);
            }
            else if (mod == 1)
            {
                return (int)(Math.Pow(3, div - 1) * 4);
            }
            else
            {  // mod == 2
                return (int)(Math.Pow(3, div) * 2);
            }
        }

        //Testcase
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.Write(s.IntegerBreak(10));
        }
    }
}
