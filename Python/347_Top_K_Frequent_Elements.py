import collections


class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        n = len(nums)
        cntDict = collections.defaultdict(int)

        for elem in nums:
            cntDict[elem] += 1

        freqList = [[] for i in range(n + 1)]

        for elem in cntDict:
            freqList[cntDict[elem]] += elem,

        ans = []
        for i in range(n, 0, -1):
            ans += freqList[i]
        return ans[:k]


def test():
    s = Solution()
    print s.topKFrequent([1, 1, 1, 2, 2, 3], 2)


if __name__ == '__main__':
    test()
