public class Solution {
    public boolean canWinNim(int n) {
        return n % 4 != 0;
    }

    // Testcase
    public static void main(String[] args) {
        Solution sol = new Solution();
        int stone_num = (int) (1 + Math.random() * 1000);

        if (sol.canWinNim(stone_num))
            System.out.println("When the number of stones are " + stone_num + ", first win!");
        else
            System.out.println("When the number of stones are " + stone_num + ", second win!");
    }
}
