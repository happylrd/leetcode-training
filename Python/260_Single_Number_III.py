class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        diff = 0
        for num in nums:
            diff ^= num

        diff &= -diff

        ans = [0, 0]
        for num in nums:
            if num & diff:
                ans[0] ^= num
            else:
                ans[1] ^= num
        return ans


def test():
    s = Solution()
    print s.singleNumber([1, 2, 1, 3, 2, 5])


if __name__ == '__main__':
    test()
