package codeforces;
//https://codeforces.com/problemset/problem/266/A
import java.util.Scanner;

public class StonesonTable {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc=new Scanner(System.in);
		int a=sc.nextInt();
		String s=sc.next();
		
		int count=0;
		int z=s.charAt(0);
		for(int i=1;i<s.length();i++)
		{
			if(z==s.charAt(i))
					{
						count++;
					}
			z=s.charAt(i);
		}
		System.out.println(count);
		
	
	}

}
