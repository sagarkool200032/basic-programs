import java.util.Scanner;
public class CheckOdd {
    public static void main(String args[]){
        int size;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Size of the list: ");
        size = input.nextInt();
        int arr[] = new int[size];
        System.out.print("Enter Elements in the list: ");
        for(int i=0;i<size;i++)
            arr[i] = input.nextInt();

        for(int x : arr)
        {
            if(x%2==0)
            {
                System.out.println("List Contains EVEN Number(s) also");
                System.exit(0);
            }
        }
        System.out.println("All Elements Present in List are ODD Numbers");
        input.close();
    }
}








