class base{
    base(){
        System.out.println("Constructor of Base is called");
    }
}

class derived extends base{
    derived(){
        System.out.println("Constructor of Derived is called");
    }
}
public class E10_Inheritance {

    public static void main(String args[]){
        base b = new base();
        derived d = new derived();
    }   
}