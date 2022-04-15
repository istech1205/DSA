

public class ReverseArray {
   // function that reverses array and stores it 
    // in another array
    static void reverse(int a[], int n)
    {
        int[] b =new int[n];
        int j=n;
        for(int i=0;i<n;i++){
            b[j-1]=a[i];
            j=j-1;
        }
        for(int k=0;k<n;k++){
            System.out.println("reverse array is :"+b[k]);
        }
       
    }
  
    public static void main(String[] args)
    {
        int [] arr = {10, 20, 30, 40, 50,4,5,6,66};
        reverse(arr, arr.length);
    }

    
}
