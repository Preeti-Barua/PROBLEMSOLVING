//package codeforces;
//https://codeforces.com/problemset/problem/158/A
import java.util.Scanner;

public class NextRound {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		int k=sc.nextInt();
		
		int i,count=0;
		int a[]= new int[n];
		for(i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		
		
		int score=a[k-1];
		for(i=0;i<n;i++)
		{
			if(a[i]>=score && (a[i]!=0 ||score !=0))
			{
				count++;
			}
		}
		
		System.out.println(count);
		

	}

}
