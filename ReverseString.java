import java.util.Scanner;

public class ReverseString {
    
    public static void main(String[] args) {
       
        String str;
        String reversedStr="";
        char ch;
        int n;

        System.out.println("Enter a string to reverse that");
        Scanner sc=new Scanner(System.in);
        str=sc.next();
        n=str.length();
     
        System.out.println("Your string is \n: "+str);

        for(int i=0; i< n;i++){
         ch=str.charAt(i);
         reversedStr=ch+reversedStr;
         
        }
        System.out.println("reveresed string is \n: "+reversedStr);
        
        sc.close();
        
    }
}
