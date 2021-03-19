package Java;

import java.util.ArrayList;

public class prime {
    public static void main(String[] args) {
        ArrayList<Integer> a1 = new ArrayList<Integer>();
        System.out.println("Prime no are");
        int k=2;
        int l=90;
        while(k!=l+1){
            boolean j = check_prime(k);
            if(j){
                int m=0;
                a1.add(k);
                
            }
            k++;
        }
        System.out.println(a1);
        Integer[] arr = new Integer[a1.size()];
        arr = a1.toArray(arr);
        for(int z=0;z<a1.size();z++){
            System.out.print(arr[z]+ " ");
        }
        System.out.println();
        int sum=0;
        int y=0;
        try{
            for(int z=0;z<a1.size();z++){
                for(y=0;y<=sum;y++){
                    if(z+y>=sum)
                        System.out.print(arr[z+y]+" ");
                }
                System.out.println();
                sum = z+y;
            }
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.print("\n Its okay");
        };
    }
    public static boolean check_prime(int n) {
        boolean flag = true;
        
        for(int i = 2; i<n/2+1;i++){
            if(n%i==0){
                flag=false;
                break;
            }
        }
        return flag;
    }
}
