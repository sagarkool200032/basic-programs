import java.util.Scanner;
public class RemoveWhitespace {

    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter String with whitespaces: ");
        String str = input.nextLine();
        str = str.replaceAll("\\s","");
        System.out.println(str);
        input.close();
}
}