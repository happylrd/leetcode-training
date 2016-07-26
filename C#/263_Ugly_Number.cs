using System;

namespace LeetCode
{
    public class Solution
    {
        public bool IsUgly(int num)
        {
            if (num <= 0)
                return false;
            int[] arr_factors = { 2, 3, 5 };
            foreach (int elem in arr_factors)
            {
                while (num % elem == 0)
                {
                    num /= elem;
                }
            }
            return num == 1;
        }

        //Testcase
        static void Main(string[] args)
        {
            Solution s = new Solution();
            int rand_num = new Random().Next(0, 11);
            if (s.IsUgly(rand_num))
                Console.Write(rand_num + " is a ugly number.");
            else
                Console.Write(rand_num + " isn't a ugly number.");
        }
    }
}