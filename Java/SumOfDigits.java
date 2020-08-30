import java.util.Scanner;
public class SumOfDigits {
    public static void main(String args[]){
        int num,sum=0;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Number:");
        num = input.nextInt();
        while(num>0)
        {
            int last = num%10;
            num/=10;
            sum+=last;
        }
        System.out.print("Sum: "+sum);
        input.close();
    }
}