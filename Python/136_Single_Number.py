class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans = 0;
        for i in range(len(nums)):
            ans ^= nums[i]
        return ans


def test():
    s = Solution()
    temp = [0, 0, 1, 1, 2, 3, 3, 4, 4, 5, 5]
    print s.singleNumber(temp)


if __name__ == '__main__':
    test()
