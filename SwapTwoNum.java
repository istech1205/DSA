import java.util.Scanner;

public class SwapTwoNum {
    public static void main(String args[]) {
    int a,b;
     System.out.println("Enter two numbers to swap....");
     Scanner sc=new Scanner(System.in);

      a=sc.nextInt();
      b=sc.nextInt();
      System.out.println("Before swapping number are : - "+"a="+a+",b="+b);
      sc.close();

      int temp =a;
      a=b;
      b=temp;

      System.out.println("after swapping number are : - "+"a="+a+",b="+b);
    }
}
