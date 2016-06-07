using System;

namespace LeetCode
{
    public class Solution
    {
        public int TitleToNumber(string s)
        {
            int ans = 0;
            for (int i = 0; i < s.Length; i++)
            {
                ans = ans * 26 + s[i] - 'A' + 1;
            }
            return ans;
        }
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.Write(s.TitleToNumber("AB"));
        }
    }
}
