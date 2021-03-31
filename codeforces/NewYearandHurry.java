package codeforces;

import java.util.Scanner;
///https://codeforces.com/problemset/problem/750/A
public class NewYearandHurry {

	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
		
		
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int k=sc.nextInt();
		int t=0;
		int count=0;
		int left=60*4;
		int m=left-k;
	
		for(int i=1;i<=n;i++)
		{
			t=t+i*5; 
			if(t<=m)	
				
			{
				 
				count=count+1;
			}}
	    System.out.println(count);
		}

}
