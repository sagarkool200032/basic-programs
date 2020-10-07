import java.util.Scanner;

public class E6_SumOf2NumsStatic {
    static int n1,n2=50,ans;
    
    static void  setNums(int num1){
        n1 = num1;
    }

    static void sum(){
         ans = n1+n2;
    }

    static void display(){
        System.out.println("Sum: "+ans);
    }
    public static void main(String args[]){
        int num1;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Number: ");
        num1 = input.nextInt();
        setNums(num1);
        sum();
        display();
        input.close();
    }
}