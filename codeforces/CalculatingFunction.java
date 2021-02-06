package codeforces;
//https://codeforces.com/problemset/submit/486/A
import java.util.Scanner;

public class CalculatingFunction {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		int k= sc.nextInt();
		int m=-1+2-3;

	
		for(int i=4;i<=k;i++)//2
		{
			if(i%2==0)
			{
				m=m+i;
			
			}
			else
			{
				m=m-i;	
			
			}
			
		}

		

		System.out.println(m);
		

	}

}
