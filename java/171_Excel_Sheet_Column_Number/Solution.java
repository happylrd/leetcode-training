public class Solution {
    public int titleToNumber(String s) {
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            ans = ans * 26 + s.charAt(i) - 'A' + 1;
        }
        return ans;
    }

    // Testcase
    public static void main(String[] args) {
        Solution s = new Solution();
        System.out.print(s.titleToNumber("AB"));
    }
}
