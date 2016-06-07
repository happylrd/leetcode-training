//  Definition for a binary tree node.
class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        val = x;
    }
}

public class Solution {
    public boolean isSameTree(TreeNode p, TreeNode q) {
        if (p == null && q == null)
            return true;
        else if (p == null || q == null)
            return false;
        else {
            if (p.val == q.val) {
                if (isSameTree(p.left, q.left))
                    return isSameTree(p.right, q.right);
            }
            return false;
        }
    }

    // Testcase
    public static void main(String[] args) {
        Solution s = new Solution();
        System.out.print(s.isSameTree(new TreeNode(1), new TreeNode(2)));
    }
}
