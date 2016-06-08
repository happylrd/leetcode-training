using System;

namespace LeetCode
{
    public class Solution
    {
        public void MoveZeroes(int[] nums)
        {
            int y = 0;
            for (int i = 0; i < nums.Length; i++)
            {
                if (nums[i] != 0)
                {
                    int temp = nums[i];
                    nums[i] = nums[y];
                    nums[y] = temp;
                    y += 1;
                }
            }
        }

        //Testcase
        static void Main(string[] args)
        {
            Solution s = new Solution();
            int[] temp = {0, 1, 0, 3, 12};
            s.MoveZeroes(temp);
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
