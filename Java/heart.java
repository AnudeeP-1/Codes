package Java;

import java.util.ArrayList;

public class heart {
    public static void main(String[] args) {
        ArrayList<Integer> prime = new ArrayList<Integer>();
        int m=0;
        int range = 500;
        int size = 50;
        while(m!=range){
            boolean check = check_prime(m);
            if(check){
                prime.add(m);
                if(prime.size()==size){
                    break;
                }
            }   
            m++;
            
        }
        System.out.print(prime);
        
        ArrayList<Integer> both = new ArrayList<Integer>();
        both = fib_series();
        System.out.println(both);
        try{
            ArrayList<Integer> both1 = new ArrayList<Integer>();
            for(int i=0;i<10;i++){
                both1.add(both.get(i));
                both1.add(prime.get(i));
                
            }
        System.out.print(both1);
        System.out.println(both1.get(14-1));
        }catch(Exception e){}
    }
    
    public static boolean check_prime(int n) {
        boolean flag = true;
        if(n==0 || n==1)
            flag=false;
        for(int i=2;i<n/2+1;i++){
            
            if(n%i==0){
                flag=false;
            }
        }
        return flag;
    }
    public static ArrayList<Integer> fib_series() {
        ArrayList<Integer> fib = new ArrayList<Integer>();
        int range = 10;
        int sum = 0;
        fib.add(0);
        fib.add(1);
        for(int i=2;i<range;i++){
            sum = fib.get(i-1)+fib.get(i-2);
            fib.add(i, sum);
        }
        return fib;
    }
}
