import random


class Solution(object):
    def canWinNim(self, n):
        """
        :type n: int
        :rtype: bool
        """
        return n % 4 != 0


def test():
    sol = Solution()
    stone_num = random.randint(1, 1000)
    if sol.canWinNim(stone_num):
        print "When the number of stones are " + str(stone_num) + ", first win!"
    else:
        print "When the number of stones are " + str(stone_num) + ", second win!"


if __name__ == '__main__':
    test()
