import java.lang.Math;
import java.util.Scanner;
public class Power {
    public static void main(String args[]){
        double num;
        int sum=0;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Number:");
        num = input.nextInt();
        for(double i=1;i<=3;i++)
            sum += Math.pow(num,i);
        System.out.print("n+nn+nnn= "+sum);
        input.close();
    }
}