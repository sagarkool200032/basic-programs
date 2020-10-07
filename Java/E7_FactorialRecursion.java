import java.util.Scanner;
class factorial{

     static int fact(int n){
        if(n==0)
            return 1;
        return fact(n-1) * n;
    }

     static int fact2(int n){
        int fact = 1;
        for(int i=1;i<=n;i++)
        {
            fact*=i;
        }
        return fact;
    }

     static void display(int n)
    {
        System.out.println("Factorial: "+n);
    }
}

public class E7_FactorialRecursion {
    public static void main(String args[]){
        int num;
        Scanner input = new Scanner(System.in);
        // factorial f = new factorial();
        System.out.print("Enter Number: ");
        num = input.nextInt();
        factorial.display(factorial.fact(num));
        factorial.display(factorial.fact2(num));
        input.close();
    }
}