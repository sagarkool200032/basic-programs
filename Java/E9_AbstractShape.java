import java.util.Scanner;
abstract class Shape { 
    final float PI = 3.14f; 
    Scanner input = new Scanner(System.in);
    abstract float volume();  
}

class Cone extends Shape{
    float volume()
    {
        System.out.print("Enter Radius: ");
        float r = input.nextFloat();
        System.out.print("Enter Height: ");
        float h = input.nextFloat();
        float volume = (PI*(r*r)*h)/3;
        return volume;
    }
}

class Sphere extends Shape{
    float volume()
    {
        System.out.print("Enter Radius: ");
        float r = input.nextFloat();
        float volume = (4*PI*(r*r*r))/3;
        input.close();
        return volume;
    }
}

public class E9_AbstractShape{
    public static void main(String args[]){
        Cone c = new Cone();
        Sphere s = new Sphere();
        System.out.println("Volume of Cone: "+c.volume());
        System.out.println("Volume of Sphere: "+s.volume());
    } 
}