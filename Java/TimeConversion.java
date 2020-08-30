// converting Seconds to hours,mins and seconds
import java.util.Scanner;
public class TimeConversion {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int secs,hours,mins;
        System.out.print("Enter Seconds: ");
        secs = input.nextInt();
        hours = secs / 3600;
        secs = secs % 3600;
        mins = secs / 60;
        secs = secs % 60;
        String str1 = String.format("%02d:",hours);
        String str2 = String.format("%02d:",mins);
        String str3 = String.format("%02d",secs);
        System.out.print("Time: "+str1+str2+str3);
        input.close();
    }    
}