package AdvancedJava;

import java.util.Scanner;

public class fibaPrime {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the length");
        int n = in.nextInt();

        //fibanacci series
        // int t1 = 0;
        // int t2 = 1;
        // int a[] = new int[10];
        // a[0] = t1;
        // a[1] = t2;
        // for(int i=2;i<n;i++){
        //     a[i] = t1+t2; 
        //     t1 = t2;
        //     t2 = a[i];
        // }
        // for(int i=0;i<n;i++){
        //     System.out.println(a[i]);
        // }

        //prime number
        int b[] = new int[100];
        int l=0;
        for(int i=0;i<n;i++){
            int j=i/2;
            if(i!=0 && i!=1){
                for(int k=2;k<n;k++){
                    if(k%j!=0){
                        b[l++]=k;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
            System.out.println(b[i]);
        System.out.println(l);
    }
}