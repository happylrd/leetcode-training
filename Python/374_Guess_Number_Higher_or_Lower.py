# The guess API is already defined for you.
# @param num, your guess
# @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
# def guess(num):
import random

# just for testing easily
max_num = random.randint(5, 20)
correct_num = random.randint(1, max_num)


def guess(num):
    if num < correct_num:
        return 1
    elif num > correct_num:
        return -1
    else:
        return 0


class Solution(object):
    def guessNumber(self, n):
        """
        :type n: int
        :rtype: int
        """

        low, high = 1, n
        while low <= high:
            mid = (low + high) / 2
            res = guess(mid)
            if res < 0:
                high = mid - 1
            elif res > 0:
                low = mid + 1
            else:
                return mid

    def guessNumber2(self, n):
        """
        :type n: int
        :rtype: int
        """
        low, high = 1, n
        while low <= high:
            mid1 = low + (high - low) / 3
            mid2 = high - (high - low) / 3
            res1 = guess(mid1)
            res2 = guess(mid2)

            if res1 == 0:
                return mid1
            if res2 == 0:
                return mid2
            elif res1 < 0:
                high = mid1 - 1
            elif res2 > 0:
                low = mid2 + 1
            else:
                low = mid1 + 1
                high = mid2 - 1


def test():
    sol = Solution()
    print "Correct Num: " + str(correct_num) + "\tFinal Guess Num: " + str(sol.guessNumber(max_num))


if __name__ == '__main__':
    test()
