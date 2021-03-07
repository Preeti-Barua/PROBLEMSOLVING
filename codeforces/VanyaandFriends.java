package codeforces;
//https://codeforces.com/problemset/problem/677/A
import java.util.Scanner;

public class VanyaandFriends 
{

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		int A[]= new int[n];
		int height=sc.nextInt();
		
		for(int i=0;i<n;i++)
		{
			A[i]=sc.nextInt();
		}
		int sum=0;
		for(int i=0;i<n;i++)
		{
			if(A[i]<=height)
			{
				sum=sum+1;
			}
			else
			{
				sum=sum+2;
			}
		}
		System.out.println(sum);
		
		

	}

}
