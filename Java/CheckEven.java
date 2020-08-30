import java.util.Scanner;
public class CheckEven {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Number: ");
        int num = input.nextInt();
        if(num%2==0)
            System.out.print(1);
        else
            System.out.print(0);
        input.close();
    }
}