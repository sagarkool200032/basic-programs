public class PrimeNumSum {
    public static void main(String args[]){
        int sum=0,total=0;
        for(int i=1;total<100;i++)
        {
            int count=0;
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                    count++;
            }
            if(count==2)
            {
                sum+=i;
                total++;
            }    
        }
        System.out.println("\nSum: "+sum);
    }
}