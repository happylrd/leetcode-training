using System;

namespace LeetCode
{
    public class Solution
    {
        public int[] ProductExceptSelf(int[] nums)
        {
            int n = nums.Length;
            int[] ans = new int[n];
            ans[0] = 1;
            for (int i = 1; i < n; i++)
            {
                ans[i] = ans[i - 1] * nums[i - 1];
            }
            int right = 1;
            for (int i = n - 1; i >= 0; i--)
            {
                ans[i] *= right;
                right *= nums[i];
            }
            return ans;
        }
        static void Main(string[] args)
        {
            Solution s = new Solution();
            int[] temp = s.ProductExceptSelf(new int[]{1, 2, 3, 4});
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
