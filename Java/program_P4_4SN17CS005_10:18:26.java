package Java;

import java.util.Scanner;
public class program_P4_4SN17CS005_10:18:26 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(new File("/root/Desktop/unicourt/input_P4.csv"));
        sc.useDelimiter(",");
        while (sc.hasNext()){  
            System.out.print(sc.next());
        } 
        sc.close();
    }
}
