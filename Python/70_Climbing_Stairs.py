import random


class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        a = b = 1
        for i in range(2, n + 1):
            a, b = b, a + b
        return b


def test():
    s = Solution()
    stair_num = random.randint(1, 20)
    print "Number of layers: " + str(stair_num) + "\tNumber of steps: " + str(s.climbStairs(stair_num))


if __name__ == '__main__':
    test()
