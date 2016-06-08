using System;

namespace LeetCode
{
    public class Solution
    {
        public int AddDigits(int num)
        {
            while (num > 9)
            {
                int temp_sum = 0;
                while (num != 0)
                {
                    temp_sum += num % 10;
                    num /= 10;
                }
                num = temp_sum;
            }
            return num;
        }

        public int AddDigits2(int num)
        {
            if (num == 0)
                return 0;
            return (num - 1) % 9 + 1;
        }

        //Testcase
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.Write(s.AddDigits(38));
        }
    }
}
