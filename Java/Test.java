class Student
{  
   int rollno;  
   String name;  
   static String college = "GD GOENKA";

   Student(int r, String n) 
    {  
      rollno = r;  
      name = n;  
    }  
   void display ()
    {System.out.println(rollno+" "+name+" "+college);}  
} 

public class Test
{  
    public static void main(String args[]){  
        Student s1 = new Student(111,"Karan");  
        Student s2 = new Student(222,"Aryan");  
    //Student.college=“GDGU";  
    s1.display();  
    s2.display();  
    }  
}  
