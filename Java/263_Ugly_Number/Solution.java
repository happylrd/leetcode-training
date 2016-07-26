public class Solution {
    public boolean isUgly(int num) {
        if (num <= 0)
            return false;
        int[] arr_factors = {2, 3, 5};
        for (int elem : arr_factors) {
            while (num % elem == 0) {
                num /= elem;
            }
        }
        return num == 1;
    }

    // Testcase
    public static void main(String[] args) {
        Solution s = new Solution();
        int rand_num = (int) (Math.random() * 11);
        if (s.isUgly(rand_num))
            System.out.print(rand_num + " is a ugly number.");
        else
            System.out.print(rand_num + " isn't a ugly number.");

    }
}
