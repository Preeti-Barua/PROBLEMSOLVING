package codeforces;

import java.util.Scanner;
//https://codeforces.com/problemset/problem/1335/A
public class CandiesAndTwoSisters {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		for(int i=0;i<t;i++)
		{
			int n=sc.nextInt();
			if(n==1 && n==2)
			{
				System.out.println(0);
			}
			else
			{
				int k=n-1;
				int ans=k/2;
				System.out.println(ans);
			}
			
		}
		

	}

}
