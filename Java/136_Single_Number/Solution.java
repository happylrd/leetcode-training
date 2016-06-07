public class Solution {
    public int singleNumber(int[] nums) {
        int ans = 0;
        for (int i = 0; i < nums.length; i++) {
            ans ^= nums[i];
        }
        return ans;
    }

    // Testcase
    public static void main(String[] args) {
        Solution s = new Solution();
        int[] temp = {0, 0, 1, 1, 2, 3, 3, 4, 4, 5, 5};
        System.out.println(s.singleNumber(temp));
    }
}
