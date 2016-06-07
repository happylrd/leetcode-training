# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution(object):
    def isSameTree(self, p, q):
        """
        :type p: TreeNode
        :type q: TreeNode
        :rtype: bool
        """
        if p is None and q is None:
            return True
        elif p is None or q is None:
            return False
        else:
            if p.val == q.val:
                if self.isSameTree(p.left, q.left):
                    return self.isSameTree(p.right, q.right)
            return False


def test():
    s = Solution();
    print s.isSameTree(TreeNode(1), TreeNode(2))


if __name__ == '__main__':
    test()
