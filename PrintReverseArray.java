public class PrintReverseArray {

    static int arr[] = { 1, 2,3, 4, 5 };
    static int totalLength = 0;

    public static void main(String[] args) {
        totalLength = arr.length;
        for (int i = 0; i < totalLength; i++) {
         System.out.println("Original array is : "+arr[i]);
        }
        for(int i=totalLength-1;i>=0;i--){
         System.out.println("Reverse array is : "+arr[i]);
        }
    }
}
