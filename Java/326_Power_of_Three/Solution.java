public class Solution {
    public boolean isPowerOfThree(int n) {
        if (n < 1)
            return false;

        while (n % 3 == 0) {
            n /= 3;
        }

        return n == 1;
    }

    public boolean isPowerOfThree2(int n) {
        return Integer.toString(n, 3).matches("^10*$");
    }

    public boolean isPowerOfThree3(int n) {
        return (Math.log10(n) / Math.log10(3)) % 1 == 0;
    }

    public boolean isPowerOfThree4(int n) {
        /*
          1162261467:
            Math.pow(3, (int) (Math.log10(Integer.MAX_VALUE) / Math.log10(3)))
        */
        return n > 0 && 1162261467 % n == 0;
    }

    // Testcase
    public static void main(String[] args) {
        Solution sol = new Solution();
        int rand_num = (int) (Math.random() * 1000);

        if (sol.isPowerOfThree(rand_num))
            System.out.print(rand_num + " is power of three.");
        else
            System.out.print(rand_num + " isn't power of three.");
    }
}
