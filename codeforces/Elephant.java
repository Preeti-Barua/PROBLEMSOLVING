package codeforces;
//https://codeforces.com/problemset/problem/617/A
import java.util.Scanner;

public class Elephant {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		
		Scanner sc= new Scanner(System.in);
		int i=sc.nextInt();
		sc.close();
		
		if(i%5==0)
		{
			System.out.println(i/5);
		}
		else
		{
			System.out.println((i/5)+1);
		}
		
		
		
	}

}


 