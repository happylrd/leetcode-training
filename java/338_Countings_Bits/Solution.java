import java.util.ArrayList;
import java.util.Scanner;

public class Solution {
    public int[] countBits(int num) {
        ArrayList<Integer> ans = new ArrayList<>();
        ans.add(0);
        for (int i = 1; i < num + 1; i++) {
            ans.add(ans.get(i >> 1) + (i & 1));
        }

        Integer[] ans1 = new Integer[ans.size()];
        ans.toArray(ans1);
        int[] ans2 = new int[ans1.length];
        for (int i = 0; i < ans1.length; i++) {
            ans2[i] = ans1[i].intValue();
        }
        return ans2;
    }

    // Testcase
    public static void main(String[] args) {
        Solution s = new Solution();
        int num;
        System.out.println("Input the int: ");
        num = new Scanner(System.in).nextInt();
        int[] temp = s.countBits(num);
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
