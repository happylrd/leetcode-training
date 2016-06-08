import java.util.*;

//  Definition for a binary tree node.
class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        val = x;
    }

    TreeNode(int x, TreeNode left, TreeNode right) {
        val = x;
        this.left = left;
        this.right = right;
    }
}

public class Solution {
    public List<Integer> preorderTraversal(TreeNode root) {
        List<Integer> ans = new ArrayList<>();
        TreeNode top = root;
        List<TreeNode> stack = new ArrayList<>();
        while (top != null || (!stack.isEmpty())) {
            if (top == null) {
                top = stack.get(stack.size() - 1);
                stack.remove(stack.size() - 1);
            }
            ans.add(top.val);
            if (top.right != null) {
                stack.add(top.right);
            }
            top = top.left;
        }
        return ans;
    }

    // Testcase
    public static void main(String[] args) {
        Solution s = new Solution();
        List<Integer> temp = s.preorderTraversal(
                new TreeNode(1, null,
                        new TreeNode(2,
                                new TreeNode(3), null)));
        System.out.print("[");
        for (int i = 0; i < temp.size(); i++) {
            System.out.print(temp.get(i));
            if (i == temp.size() - 1)
                break;
            System.out.print(",");
        }
        System.out.print("]");
    }
}
