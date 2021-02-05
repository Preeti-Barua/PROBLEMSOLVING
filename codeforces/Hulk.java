package codeforces;

import java.util.Scanner;

public class Hulk {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		Scanner sc= new Scanner(System.in);
		int ac=sc.nextInt();
		int count=0;
		if(ac==1)
		{
			System.out.println("I hate it");
			
		}
		if(ac==2)
		{
			System.out.println("I hate that I love it");
			
		}

		else
		{
			for(int i=0;i<ac;i++)
			{
				count++;
			}
		}
		String a="I hate that ";
		String b="I love that ";
		
		
		if(count%2==0)
		{
			for(int i=1;i<count;i+=2)
			{
				System.out.print(a);
				if(i==count-1)
				{
					System.out.println("I love it");
					break;
				}
					System.out.print(b);
			
		}
		}
		if(count%2!=0)
		{
			for(int i=1;i<count;i+=2)
			{
				System.out.print(a);
				System.out.print(b);
				if(i==count-2)
				{
					System.out.println("I hate it");
					break;
				}
			}
		}
	}
	}
	



