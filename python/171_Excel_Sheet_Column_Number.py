class Solution(object):
    def titleToNumber(self, s):
        """
        :type s: str
        :rtype: int
        """
        ans = 0
        for elem in s:
            ans = ans * 26 + ord(elem) - ord('A') + 1
        return ans


def test():
    s = Solution()
    print s.titleToNumber('AB');


if __name__ == '__main__':
    test()
