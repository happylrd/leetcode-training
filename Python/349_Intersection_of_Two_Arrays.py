class Solution(object):
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        return list(set(nums1) & set(nums2))

    def intersection2(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        set1 = set(nums1);
        ans = []
        for num in nums2:
            if num in set1:
                ans += (num,)
                set1.remove(num)
        return ans


def test():
    s = Solution()
    print s.intersection([1, 2, 2, 1], [2, 2])


if __name__ == '__main__':
    test()
