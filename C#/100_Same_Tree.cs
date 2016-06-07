using System;

namespace LeetCode
{
    // Definition for a binary tree node.
    public class TreeNode {
        public int val;
        public TreeNode left;
        public TreeNode right;
        public TreeNode(int x) { val = x; }
      }
    public class Solution
    {
        public bool IsSameTree(TreeNode p, TreeNode q)
        {
            if (p == null && q == null)
                return true;
            else if (p == null || q == null)
                return false;
            else
            {
                if (p.val == q.val)
                {
                    if (IsSameTree(p.left, q.left))
                        return IsSameTree(p.right, q.right);
                }
                return false;
            }
        }
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.Write(s.IsSameTree(new TreeNode(1), new TreeNode(2)));
        }
    }
}
