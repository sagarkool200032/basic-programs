import java.util.Scanner;

class Sum{
    int n1,n2,ans;
    
    void setNums(int num1,int num2){
        n1 = num1;
        n2 = num2;
    }

    void sum(){
         ans = n1+n2;
    }

    void display(){
        System.out.println("Sum: "+ans);
    }
}

public class E5_SumOf2Nums {
  
  public static void main(String args[]){
      int num1,num2;
      Scanner input = new Scanner(System.in);
      Sum s = new Sum();
      System.out.print("Enter Number1: ");
      num1 = input.nextInt();
      System.out.print("Enter Number1: ");
      num2 = input.nextInt();
      s.setNums(num1, num2);
      s.sum();
      s.display();
      input.close();
  }
}