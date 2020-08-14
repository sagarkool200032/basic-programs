public class VowelsPyramid {
    public static void main(String args[]){
        int n = 4;
        char arr[] = new char[]{'a','e','i','o','u'};

        for(int x=0;x<5;x++)
        {
            for(int i=0;i<n;i++)
                System.out.print(" ");
            n--;

            for(int i=0;i<=x;i++)
                System.out.print(arr[i]+" ");

            System.out.print("\n");

        }
    }
}