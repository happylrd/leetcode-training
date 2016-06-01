class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        return n * (n + 1) / 2 - sum(nums)


class Solution2(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        a = b = 1
        for num in nums:
            a ^= num
        for i in range(len(nums) + 1):
            b ^= i
        return a ^ b


def test():
    s = Solution()
    print s.missingNumber([0, 1, 3])


if __name__ == '__main__':
    test()
