import java.util.Scanner;
public class E3_SumOfDigitsClass {
    
    void displayAnwer(int n){
        int ans=0;
        while(n>0)
        {
            int last = n%10;
            n/=10;
            ans+=last;
        }
        System.out.println("Sum of digits: "+ans);
    }
    public static void main(String args[]){
        int n;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Number: ");
        n = input.nextInt();
        E3_SumOfDigitsClass s = new E3_SumOfDigitsClass();
        s.displayAnwer(n);
        input.close();
    }
}