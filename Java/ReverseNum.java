import java.util.Scanner;
public class ReverseNum {
    
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Number: ");
        int num = input.nextInt();
        int rev=0;
        while(num>0)
        {
            int last = num%10;
            num/=10;
            rev = rev*10+last;
        }
        System.out.println(rev);
        input.close();
    }
}