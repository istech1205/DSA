
package leetCodeProblems.array;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Scanner;

/**
 * FindUniqueOccurance
 */
public class FindUniqueOccurance {

    static int inputArray;

    public static void main(String[] args) {
    
        int n;
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of elements you want to store: ");

        n = sc.nextInt();

        int[] array = new int[n];

        System.out.print("Enter the elements you want to store: ");

        for (int i = 0; i < n; i++) {
            // reading array elements from the user
            array[i] = sc.nextInt();
        }

        System.out.println("Array elements are: ");
        sc.close();

        for (int i = 0; i < n; i++) {
           // System.out.println(array[i]);
           
        }
       HashMap<Integer,Integer> numOccurance=new HashMap<>();
       for(int num: array){
        numOccurance.put(num, numOccurance.getOrDefault(num, 0)+1);

       }
       HashSet<Integer> uniqueValues=new HashSet<>(numOccurance.values());

       boolean ans=numOccurance.size()==uniqueValues.size();
       System.out.println("ans is : "+ans);


    }
    
}

