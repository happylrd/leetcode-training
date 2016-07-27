using System;

namespace LeetCode
{
    public class Solution
    {
        public bool IsPowerOfThree(int n)
        {
            if (n < 1)
                return false;

            while (n % 3 == 0)
            {
                n /= 3;
            }

            return n == 1;
        }

        public bool IsPowerOfThree2(int n)
        {
            return (Math.Log10(n) / Math.Log10(3)) % 1 == 0;
        }

        public bool IsPowerOfThree3(int n)
        {
            /*
             * 1162261467:
             *   Math.Pow(3, (int)(Math.Log(int.MaxValue, 3)))
             */
            return n > 0 && 1162261467 % n == 0;
        }

        //Testcase
        static void Main(string[] args)
        {
            Solution sol = new Solution();
            int rand_num = new Random().Next(0, 1000);
            if (sol.IsPowerOfThree(rand_num))
                Console.Write(rand_num + " is power of three.");
            else
                Console.Write(rand_num + " isn't power of three.");
        }
    }
}