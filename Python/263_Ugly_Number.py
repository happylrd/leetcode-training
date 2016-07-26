import random


class Solution(object):
    def isUgly(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if num <= 0:
            return False
        for x in [2, 3, 5]:
            while num % x == 0:
                num /= x
        return num == 1


def test():
    s = Solution()
    rand_num = random.randint(0, 10)
    if s.isUgly(rand_num):
        print str(rand_num) + " is a ugly number."
    else:
        print str(rand_num) + " isn't a ugly number."


if __name__ == '__main__':
    test()