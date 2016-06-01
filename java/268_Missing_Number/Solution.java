public class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        return n * (n + 1) / 2 - sum;
    }

    public int missingNumber2(int[] nums) {
        int a = 1, b = 1;
        for (int num : nums) {
            a ^= num;
        }
        for (int i = 0; i < nums.length + 1; i++) {
            b ^= i;
        }
        return a ^ b;
    }

    // Testcase
    public static void main(String[] args) {
        Solution s = new Solution();
        System.out.print(s.missingNumber(new int[]{0, 1, 3}));
    }
}
