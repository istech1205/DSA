package leetCodeProblems.array;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class FourthSum {

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

        List<Integer> ans = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (arr[i] + arr[j] + arr[k] == target) {
                        ans.add(0);
                        ans.add(1);
                        ans.add(2);
                       
                    }
                }
               
            }
        }
        System.out.println("Array indexes is ..." + ans);
        sc.close();
    }
}
