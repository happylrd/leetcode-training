class Solution(object):
    def countBits(self, num):
        """
        :type num: int
        :rtype: List[int]
        """
        ans = [0]
        for x in range(1, num + 1):
            ans += (ans[x >> 1] + (x & 1),)
        return ans


def main():
    s = Solution()
    v = int(raw_input("Input a int: "))
    print s.countBits(v)


if __name__ == '__main__':
    main()
