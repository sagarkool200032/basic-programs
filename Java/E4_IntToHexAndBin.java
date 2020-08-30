import java.util.Scanner;
public class E4_IntToHexAndBin {

    void intToBin(int num){
        System.out.println(Integer.toBinaryString(num));
    }

    void intToHex(int num){
        System.out.println(Integer.toHexString(num));
    }
    public static void main(String args[]){
        int num;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter New Number: ");
        num = input.nextInt();
        E4_IntToHexAndBin i = new E4_IntToHexAndBin();
        i.intToHex(num);
        i.intToBin(num);
        input.close();
    }
}