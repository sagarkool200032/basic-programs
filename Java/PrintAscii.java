import java.util.Scanner;
public class PrintAscii {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Character: ");
        char c = input.next().charAt(0);
        int ascii = c;
        System.out.println("Ascii Value of "+c+" is: "+ascii);
        input.close();
}
}

