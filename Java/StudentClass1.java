import java.util.Scanner;
public class StudentClass1 {
    int rollNo;
    String name;

    void display(){
        System.out.println("Name: "+name);
        System.out.println("Roll No: "+rollNo);
    }
    public static void main(String args[])
    {
        StudentClass1 s = new StudentClass1();
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Name: ");
        s.name = input.nextLine();
        System.out.print("Enter Roll No: ");
        s.rollNo = input.nextInt();
        s.display();
        input.close();
    }
}