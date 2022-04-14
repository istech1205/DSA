import java.util.Scanner;

public class LargestNoInArray {

    static int inputArray;

    public static void main(String args[]) {
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
            System.out.println(array[i]);
            inputArray = array[i];
        }

        int largest = Integer.MIN_VALUE;
        for (int i = 0; i < array.length; i++) {
            if (array[i] > largest) {
                largest = array[i];
            }

        }
        System.out.println("largest no in array is  : " + largest);
    }
}
