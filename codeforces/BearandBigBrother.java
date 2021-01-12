//package codeforces;
//https://codeforces.com/problemset/problem/791/A
import java.util.Scanner;

public class BearandBigBrother {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		Scanner s=new Scanner(System.in);
		int a=s.nextInt();
		int b=s.nextInt();
		
		int count=0;
		while(true)
		{
			 count++;
			 int l=a*3;
			 int m=b*2;
			 
			 
			 if(l>m)
			 {
				 
				 System.out.println(count);
				 break;
			 }
			 
			 a=l;
			 b=m;
			 
		}
		
		
		//System.out.println(count);

	}

}
