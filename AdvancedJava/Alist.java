package AdvancedJava;

import java.util.Scanner;
public class Alist {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		float[] bank = new float[2];
		float emi=0,sum=0;
		int p=in.nextInt();
		int t=in.nextInt();
		for(int j=0;j<2;j++) {
			sum=0;
			int n=in.nextInt();
			for(int i=0;i<n;i++) {
			int t1=in.nextInt();
			float r=in.nextFloat();
			float k=(float) Math.pow((1+r),(t1*12));//(1+r)^(t1*12);
			emi=(p*r)/(1-1/k);
			sum=sum+emi;
			}
			bank[j]=sum;
		}
		if(bank[0]<bank[1]) {
			System.out.println("Bank A");
		}
		else {
		System.out.println("Bank B");
		}
	}
}