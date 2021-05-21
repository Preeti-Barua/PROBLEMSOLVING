import java.util.Scanner;
//
//problem: https://codeforces.com/problemset/problem/546/A
public class SoldierandBanana {

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		
		Scanner sc=new Scanner(System.in);
		int k=sc.nextInt();
		int n=sc.nextInt();
		int w=sc.nextInt();
		int total=0;
		int j=1;
		for(int i=1;i<=w;i++)
		{
			
		    total+=k*i;
		
		}
		
		if(total>n)
		{
			System.out.println(total-n);
		}
		else
		{
			System.out.println(0);
		}
		
	}

}
