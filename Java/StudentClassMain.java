import java.util.Scanner;
class StudentClass2{
    int rollNo;
    String name;

    void display(){
        System.out.println("Name: "+name);
        System.out.println("Roll No: "+rollNo);
    }
}

public class StudentClassMain{
    public static void main(String args[])
    {
        StudentClass2 s = new StudentClass2();
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Name: ");
        s.name = input.nextLine();
        System.out.print("Enter Roll No: ");
        s.rollNo = input.nextInt();
        s.display();
        input.close();
    }
}