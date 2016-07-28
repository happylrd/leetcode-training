using System;

namespace LeetCode
{
    public class Solution
    {
        public bool CanWinNim(int n)
        {
            return n % 4 != 0;
        }

        //Testcase
        static void Main(string[] args)
        {
            Solution sol = new Solution();
            int stone_num = new Random().Next(1, 1001);

            if (sol.CanWinNim(stone_num))
                Console.WriteLine("When the number of stones are " + stone_num + ", first win!");
            else
                Console.WriteLine("When the number of stones are " + stone_num + ", second win!");

        }
    }
}