package Java;

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int a[] = new int[n];
		int b[] = new int[n];
		int i,j,k,l=0;
		for (k=0;k<n;k++){
		    for(j=0;j<n;j++){
		        a[j] = in.nextInt();
		    }
		    int m = a.length; 
            for (i = 0; i < m-1; i++) 
                for (j = 0; j < m-i-1; j++) 
                    if (a[j] > a[j+1]){
                        int temp = a[j]; 
                        a[j] = a[j+1]; 
                        a[j+1] = temp; 
		            }
		    b[l]=a[m-2];
            l=l+1;
	    }
	    for(int o=0;o<b.length;o++){
	        if(b[o]!=0)
	            System.out.println(b[o]);
        }
    }
}