import java.util.Scanner;
public class PrintMulTable {
    public static void main(String args[]){
        int num;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Number:");
        num = input.nextInt();
        for(int i=1;i<=10;i++)
        {
            System.out.println(num+"x"+i+"= "+num*i);
        }
        input.close();
    }
}