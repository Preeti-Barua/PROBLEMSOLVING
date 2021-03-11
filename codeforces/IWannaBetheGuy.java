package codeforces;

import java.util.ArrayList;

import java.util.Scanner;

public class IWannaBetheGuy {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc= new Scanner(System.in);
		ArrayList<Integer>al=new ArrayList<Integer>();
		int n=sc.nextInt();
		int a=sc.nextInt();
		int A[]=new int[a];
		for(int i=0;i<a;i++)
		{
			A[i]=sc.nextInt();
			al.add(A[i]);
			
		}
		int b=sc.nextInt();
		
		int B[]=new int[b];
	
		for(int i=0;i<b;i++)
		{
			B[i]=sc.nextInt();
			al.add(B[i]);
			
		}
	 	
	    int count=0;
		for(int i=1;i<=n;i++)
		{
			if(al.contains(i))
			{
			     count++;
			}
		}
		
		if(count==n) 
		{
		       System.out.println("I become the guy.");
	       }
		else {
			 System.out.println("Oh, my keyboard!");

		}
}
}
