package codeforces;

import java.util.Scanner;

public class Present {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int A[]=new int[n];
		for(int i=0;i<n;i++)
		{
			A[i]=sc.nextInt();
		}
	
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(A[j]==i+1)
				{
					System.out.println(j+1);
				}
			}
		}

	}

}
