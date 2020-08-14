import java.util.Scanner;
public class RemainderAndQuo {
    public static void main(String args[]){
        int num1,num2;
        float remainder,quotient;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter First Number: ");
        num1 = input.nextInt();
        System.out.print("Enter Second Number: ");
        num2 = input.nextInt();
        remainder = (float)num1%num2;
        quotient = (float)num1/num2;
        System.out.println("Remainder: "+remainder+"\nQuotient: "+quotient);
        input.close();
    }
}