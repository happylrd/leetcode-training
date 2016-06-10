class Solution(object):
    def increasingTriplet(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        a = b = None
        for num in nums:
            if a is None or a >= num:
                a = num
            elif b is None or b >= num:
                b = num
            else:
                return True
        return False


def test():
    s = Solution()
    print s.increasingTriplet([0, -1, 1, -3, 3])


if __name__ == '__main__':
    test()
