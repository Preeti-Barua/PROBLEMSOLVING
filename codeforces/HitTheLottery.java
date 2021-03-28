package codeforces;
//https://codeforces.com/problemset/submit/996/A
import java.util.Scanner;

public class HitTheLottery {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		
		int a=n/100;
		 n=n%100;
		 
		a+=n/20;
		n=n%20;
		a+=n/10;
		n=n%10;
		a+=n/5;
		n=n%5;
		a+=n/1;
		
		
		System.out.println(a);
		
		
		
				
		

	}

}
