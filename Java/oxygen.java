package Java;

import java.util.ArrayList;
import java.util.Scanner;

public class oxygen {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int sum=0;
        int value =0;
        ArrayList<Integer> a = new ArrayList<Integer>();
        ArrayList<Integer> b = new ArrayList<>();
        System.out.println("Enter the oxygen level");
        // for(int j=0;j<3;j++){
        //     for(int i=0;i<2;i++){
        //         a.add(in.nextInt());
        //     }
        // }
        a.add(10);
        a.add(20);
        a.add(10);
        a.add(20);
        a.add(10);
        a.add(20);
        System.out.println(a);
        System.out.println("Average is");
        try{
        for(int k=0;k<3;k++){
            value += a.get(sum);
            sum+=2;
        }
        b.add(value);
        sum=0;
            //b.add((float) ((a.get(k + 0) + a.get(k + 2) + a.get(k + 4)) / 3));
        }catch(Exception e){}
        System.out.println(b);
    }
}
