package Java;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class hello{
    public static void main(String[] args) throws FileNotFoundException {
        String a[] = new String[100];
        int b[] = new int[100];
        int i=0;
        Scanner sc = new Scanner(new File("/root/Desktop/unicourt/input_P4.csv"));
        sc.useDelimiter(",");
        while (sc.hasNext()){  
            a[i++]=sc.next();
        } 
        sc.close();
        int j=0;
        int count=0;
        int m=0;
        for(int l:b){
        if(a[m++]!=null)
          count++;
        }
        for(int k=0;k<count; k++) {
            try{
                System.out.println("Type of "+k+"is: "+a.getClass().getName());
                b[k]=Integer.parseInt(a[k]);
            }catch(NumberFormatException nfe){}
        }
        //prime printing
        i=0;
        while(i!=count-1){
            boolean l = check_prime(b[i]);
            if(l){
                System.out.print(b[i]+" ");
            }
            i++;
        }
        //palindrome
        System.out.println();
        i=0; 
        while(i!=count-1){
        int r,sum=0,temp;   
        int n=b[i++];//It is the number variable to be checked for palindrome  
        temp=n;    
        while(n>0){    
         r=n%10;  //getting remainder  
         sum=(sum*10)+r;    
         n=n/10;    
        }    
        if(temp==sum)    
         System.out.print(b[i]+" "); 
        }
        
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
