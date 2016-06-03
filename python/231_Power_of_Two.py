class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        # power of two only have one 1 in binary system
        return n > 0 and n & (n - 1) == 0
