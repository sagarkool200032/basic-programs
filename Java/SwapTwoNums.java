import java.util.Scanner;
public class SwapTwoNums {

    public static void main(String args[]){
        int num1,num2;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter First Number: ");
        num1 = input.nextInt();
        System.out.print("Enter Second Number: ");
        num2 = input.nextInt();
        num2 = num1+num2-(num1=num2);
        System.out.println("Number1: "+num1+"\nNumber2: "+num2);
        input.close();
    }
    
}



