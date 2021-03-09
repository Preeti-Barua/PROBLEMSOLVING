package codeforces;

import java.util.Scanner;

public class Magnets {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int A[]=new int[n];
				
		for(int i=0;i<n;i++)
		{
			A[i]=sc.nextInt();
		}
		
		/*
		 * asuume count=1;
		 * firstly will check the next 
		 * element is same or not
		 * if it is same name count will be one
		 * 
		 * if another element is also same will 
		 * keep the count same
		 * 
		 * if the next element is not same then 
		 * increase the count 
		 *  
		 
		 *  
		 *  */
		
		int count=1;
		for(int i=0;i<n-1;i++)
		{
			if(A[i]!=A[i+1])
			{
				count++;
			}
		}
		
		System.out.println(count);
		

	}

}
