import java.lang.String;
public class StringsMethods {
 public static void main(String args[]){
     String a="Jack and Jill went up to the hill";
     String b="This is a string";
     System.out.println("The original strings are "+ a + "\n"+b+ "\nnow implementing various string methods\n");

     System.out.println("The char at method gives value of an elemnt at a given index in this case 5 that is: "+ a.charAt(5));

     System.out.println("The lenght() method gives value of String in this case for String a is : " + a.length() );

     String c=String.format("The value of string a is: %s",a);
     System.out.println("String format returns a formatted string like this: \n"+ c);

     System.out.println("The substring method works like this in a: "+ a.substring(5,13));

     System.out.println("Boolean contain method to check for a value: "+ a.contains("hill"));

     System.out.println("boolean equals method to check for equality which would false for these strings : "+ a.equals(b));

     System.out.println("isEmpty() to check whether the string is empty: "+ a.isEmpty()); 

     System.out.println("the concat() method is used to concatenate one string after another like this: \n" + a.concat(b));

     System.out.println("replace() to replace occurences: " + a.replace("went","goes"));

     System.out.println(String.join("over", "under"));

     System.out.println("intern() returns an interned string like this: "+ a.intern());

     int ind=a.indexOf("Jack");
     System.out.println("indexof checks the index: "+ ind);

     System.out.println("toLowecase converts the string to lower case: "+ a.toLowerCase());
     System.out.println("toUpperCase converts the string to upper case : "+ a.toUpperCase());

     System.out.println("trim method removes spaces: "+ a.trim());
 }        
}

