public class Solution {
    public int climbStairs(int n) {
        int a = 1;
        int b = 1;
        for (int i = 2; i < n + 1; i++) {
            int temp = a + b;
            a = b;
            b = temp;
        }
        return b;
    }

    // Testcase
    public static void main(String[] args) {
        Solution s = new Solution();
        int stair_num = (int) (1 + Math.random() * 20);
        System.out.print("Number of layers: " + stair_num +
                "\tNumber of steps: " + s.climbStairs(stair_num));

    }
}
