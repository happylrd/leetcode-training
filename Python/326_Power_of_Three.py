import math
import random


class Solution(object):
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n < 1:
            return False

        while n % 3 == 0:
            n /= 3

        return n == 1

    def isPowerOfThree2(self, n):
        """
        :type n: int
        :rtype: bool
        """
        return n > 0 and 3 ** round(math.log(n, 3)) == n

    def isPowerOfThree3(self, n):
        """
        :type n: int
        :rtype: bool
        """
        #  1162261467:
        #    3 ** int(math.log(sys.maxint, 3))
        return n > 0 and 1162261467 % n == 0


def test():
    sol = Solution()
    rand_num = random.randint(0, 1000)

    if sol.isPowerOfThree(rand_num):
        print str(rand_num) + " is power of three."
    else:
        print str(rand_num) + " isn't power of three."


if __name__ == '__main__':
    test()
