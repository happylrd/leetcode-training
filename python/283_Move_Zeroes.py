class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        # y point to the position that first zero elem may exist
        y = 0
        for x in range(len(nums)):
            if nums[x]:
                nums[x], nums[y] = nums[y], nums[x]
                y += 1


def test():
    s = Solution()
    temp = [0, 1, 0, 3, 12]
    s.moveZeroes(temp)
    print temp


if __name__ == '__main__':
    test()
