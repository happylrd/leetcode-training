# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, x, left=None, right=None):
        self.val = x
        self.left = left
        self.right = right


class Solution(object):
    def preorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        ans = []
        top = root
        stack = []
        while top or stack:
            if top is None:
                top = stack.pop()
            ans.append(top.val)
            if top.right:
                stack.append(top.right)
            top = top.left
        return ans


def test():
    s = Solution()
    print s.preorderTraversal(TreeNode(1, None, TreeNode(2, TreeNode(3))))


if __name__ == '__main__':
    test()
