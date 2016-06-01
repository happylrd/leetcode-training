import math


class Solution(object):
    def bulbSwitch(self, n):
        """
        :type n: int
        :rtype: int
        """
        return int(math.sqrt(n))


def test():
    s = Solution()
    print s.bulbSwitch(5)
    # final state: 1 0 0 1 0 , n = 2


if __name__ == '__main__':
    test()
