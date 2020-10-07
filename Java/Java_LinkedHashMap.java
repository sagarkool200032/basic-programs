import java.util.*;
public class Java_LinkedHashMap {

    static void display(LinkedHashMap<Integer,String> lhm)
    {
        // Display elements
        for(Map.Entry<Integer,String> m:lhm.entrySet())
        {  
            System.out.println(m.getKey()+" "+m.getValue());  
        }  
    }
    public static void main(String args[]){
        // Create a hash map
        LinkedHashMap<Integer,String> lhm = new LinkedHashMap<Integer,String>();
        
        // Put elements to the map
        lhm.put(100,"Amit");  
        lhm.put(101,"Vijay");  
        lhm.put(102,"Rahul");

        // display(lhm);

        // get value of specific key
        System.out.println("Value of key 102: "+lhm.get(102)+"\n");  
        
       //Fetching key  
       System.out.println("Keys: "+lhm.keySet()+"\n");  

       //Fetching value  
       System.out.println("Values: "+lhm.values()+"\n");

       // contains value
       System.out.println("Amit Value is in HashMap ?: "+lhm.containsValue("Amit")+"\n");

        // checks if map is empty
        System.out.println("LinkedHashMap Empty ?: "+lhm.isEmpty()+"\n");

       // contains value
       System.out.println("110 key is in HashMap ?: "+lhm.containsKey(110)+"\n");

       //Fetching key-value pair  
       System.out.println("Key-Value pairs: "+lhm.entrySet()+"\n");

       // clone
       System.out.println("Clone of lhm LinkedHashMap: "+lhm.clone()+"\n");

       //remove method
       System.out.println("Before invoking remove() method: "+lhm+"\n");     
       lhm.remove(102);  
       System.out.println("After invoking remove() method: "+lhm+"\n");

        // clear
        lhm.clear();
        display(lhm);
    }
}
