class Solution(object):
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        while num > 9:
            temp_sum = 0
            while num:
                temp_sum += num % 10
                num /= 10
            num = temp_sum
        return num


class Solution2(object):
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        if num == 0:
            return 0
        return (num - 1) % 9 + 1


def test():
    s = Solution()
    print s.addDigits(38)


if __name__ == '__main__':
    test()
