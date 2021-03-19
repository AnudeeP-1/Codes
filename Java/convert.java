package Java;

import java.util.Vector;

public class convert {
    public static void main(String[] args) {
        int a= 5;
        //converting to string Using Integer.toString
        String a1 = Integer.toString(a);
        System.out.println("Using Integer.toString "+ a1);
        //converting to string Using String.valueOf
        a1=String.valueOf(a);
        System.out.println("Using String.valueOf "+ a1);
        String a2="1234";
        System.out.println("Iam string my value is "+a2);
        // converting string to int using Integer.parseInt
        int a3 = Integer.parseInt(a2);
        System.out.println("Iam string my value is "+a3);
        String x = "3";
        System.out.println("Type of x is:");
        //getting type
        System.out.println(((Object) x).getClass().getSimpleName());
        System.out.println("Conversion to hexadecimal");
        int b = 17;
        System.out.println("Int value= "+b);
        String c = Integer.toHexString(b);
        System.out.println("Hexavalue is " +c);
        System.out.println("Compare("+a3+","+b+")");
        int d = Integer.compare(a3,b);
        System.out.println(d);
        System.out.println("Reverse("+b+")");
        int e = Integer.reverse(b);
        System.out.println(e);
        //string buffer
        System.out.println("String buffer");
        StringBuffer s = new StringBuffer("1234");
        StringBuffer s2 = new StringBuffer("134");
        System.out.println("Reverse of "+s+" is "+s.reverse());
        s.append("5678");
        System.out.println("Now s is "+s);
        System.out.println("S capacity is "+s.capacity());
        System.out.println("charAt(2) "+s.charAt(2));
        System.out.println("S is "+s);
        System.out.println(s.equals(s));
        //vector
        Vector<String> vec = new Vector<String>();
        vec.add("Anudeep");
        vec.add("Marathe");
        System.out.println(vec);
        vec.remove("Marathe");
        System.out.println(vec);
    }
}
