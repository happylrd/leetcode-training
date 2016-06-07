public class Solution {
    public int bulbSwitch(int n) {
        return (int) Math.sqrt(n);
    }

    // Testcase
    public static void main(String[] args) {
        Solution s = new Solution();
        System.out.println(s.bulbSwitch(5));
        // final state: 1 0 0 1 0 , n = 2
    }
}
