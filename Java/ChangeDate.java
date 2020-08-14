import java.util.Scanner;
public class ChangeDate {
    public static void main(String args[]){
        String str,temp;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Date: ");
        str = input.nextLine();
        temp = str;
        char arr[] = str.toCharArray();
        arr[0] = temp.charAt(3);
        arr[1] = temp.charAt(4);
        arr[3] = temp.charAt(0);
        arr[4] = temp.charAt(1);
        str = String.valueOf(arr);
        System.out.println(str);
        input.close();
    }
    
}