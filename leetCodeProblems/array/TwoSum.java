import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class TwoSum {

    public static void main(String[] args) {
        int n;

        System.out.println("Enter size of array...");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();

        int arr[] = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter your target...");
        int target;
        target = sc.nextInt();

        // List<Integer> ans = new ArrayList<>();
        int ans[] = new int[2];
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] + arr[j] == target) {
                    ans[0] = i;
                    ans[1] = j;
                }
            }
        }
        System.out.println("Array indexes is ..." + ans);
        sc.close();
    }
}