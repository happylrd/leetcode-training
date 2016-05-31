class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n = len(nums)
        ans = [1] * n
        left = 1
        for i in range(n - 1):
            left *= nums[i]
            ans[i + 1] *= left
        right = 1
        for i in range(n - 1, 0, -1):
            right *= nums[i]
            ans[i - 1] *= right
        return ans


def test():
    s = Solution()
    temp = [1, 2, 3, 4]
    print s.productExceptSelf(temp)


if __name__ == '__main__':
    test()
