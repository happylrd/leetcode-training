public class Solution {
    public int[] singleNumber(int[] nums) {
        int diff = 0;
        for (int num : nums) {
            diff ^= num;
        }

        // Divided into two groups according to the last non-zero bit
        diff &= -diff;

        int[] ans = {0, 0};
        for (int num : nums) {
            if ((num & diff) == 0) {
                ans[0] ^= num;
            } else {
                ans[1] ^= num;
            }
        }
        return ans;
    }

    // Testcase
    public static void main(String[] args) {
        Solution s = new Solution();
        int[] temp = s.singleNumber(new int[]{1, 2, 1, 3, 2, 5});
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
