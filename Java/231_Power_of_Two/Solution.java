public class Solution {
    public boolean isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }

    // Testcase
    public static void main(String[] args) {
        Solution s = new Solution();
        System.out.print(s.isPowerOfTwo(8));
    }
}
