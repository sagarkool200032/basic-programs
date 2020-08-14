import java.util.Random; 
public class RandomNum {
    public static void main(String args[])
    {
        Random randomNumber = new Random(); 
        int num = randomNumber.nextInt(1000);
        System.out.println("Random Interger: "+num);
    }
}