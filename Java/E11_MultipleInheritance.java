import java.util.Scanner;

interface VolumeOfCube{
    public void cubeVolume(double a);
}

interface VolumeOfSphere{
    public void sphereVolume(double r);
}

class Volume implements VolumeOfCube,VolumeOfSphere{

    public void cubeVolume(double a)
    {
        System.out.println("Volume of cube: "+a*a*a);
    }

    public void sphereVolume(double r)
    {
        System.out.println("Volume of sphere: "+(4*22*(r*r*r))/(7*3));
    }
}

public class E11_MultipleInheritance {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        Volume v = new Volume();
        System.out.print("Enter side of cube: ");
        int a = input.nextInt();
        System.out.print("Enter radius of sphere: ");
        int r = input.nextInt();
        v.cubeVolume(a);
        v.sphereVolume(r);
        input.close();
    }  
}
