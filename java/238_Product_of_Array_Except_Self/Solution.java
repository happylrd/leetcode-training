public class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] ans = new int[n];
        ans[0] = 1;
        for (int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }
        int right = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= right;
            right *= nums[i];
        }
        return ans;
    }

    // Testcase
    public static void main(String[] args) {
        Solution s = new Solution();
        int[] temp = s.productExceptSelf(new int[]{1, 2, 3, 4});
        System.out.print("[");
        for (int i = 0; i < temp.length; i++) {
            System.out.print(temp[i]);
            if (i == temp.length - 1)
                break;
            System.out.print(",");
        }
        System.out.print("]");
    }
}
