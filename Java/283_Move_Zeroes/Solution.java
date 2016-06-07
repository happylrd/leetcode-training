public class Solution {
    public void moveZeroes(int[] nums) {
        int y = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != 0) {
                int temp = nums[i];
                nums[i] = nums[y];
                nums[y] = temp;
                y += 1;
            }
        }
    }

    // Testcase
    public static void main(String[] args) {
        Solution s = new Solution();
        int[] temp = {0, 1, 0, 3, 12};
        s.moveZeroes(temp);
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
