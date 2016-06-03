class Solution(object):
    def reverseString(self, s):
        """
        :type s: str
        :rtype: str
        """
        return s[::-1]

    def reverseString2(self, s):
        """
        :type s: str
        :rtype: str
        """
        return ''.join(reversed(s))


def test():
    s = Solution()
    print s.reverseString("hello")


if __name__ == '__main__':
    test()
