
class volume
{
    float pi = 3.14f;
    float result;
    volume()
    {
        System.out.println("No Parameters were given");
    }
    volume(int r)
    {
        this.result = (4*this.pi*(r*r*r)/3);
        System.out.println(result);
    }
    volume(int r, int h)
    {
        this.result = (this.pi*(r*r))*h;
        System.out.println(result);
    }
    volume(float a)
    {
        this.result = a*a*a;
        System.out.println(result);
    }
}

public class E8_ConstructorOverloading {
    public static void main(String args[])
    {
        volume s = new volume();
        volume sphere = new volume(5);
        volume cyclinder = new volume(5,6);
        volume cube = new volume(2f);
    }
}
