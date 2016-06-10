public class Solution {
    public boolean increasingTriplet(int[] nums) {
        Integer a = null, b = null;
        for (int elem : nums) {
            if (a == null || a >= elem)
                a = elem;
            else if (b == null || b >= elem)
                b = elem;
            else
                return true;
        }
        return false;
    }

    // Testcase
    public static void main(String[] args) {
        Solution s = new Solution();
        System.out.print(s.increasingTriplet(new int[]{0, -1, 1, -3, 3}));
    }
}
