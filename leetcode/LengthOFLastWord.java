package leetcode;

import java.util.Scanner;

public class LengthOFLastWord {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc= new Scanner(System.in);
		String s=sc.next();
		int n=last(s);
		System.out.println(n);
		
		
	}
	
	public static int last(String s)
	{
		int count=0;
		
		int n=s.length();
		while(n > 0)
		{
			if(s.charAt(--n)!=' ')
			{
				count++;
			}
			else if(count > 0)
			{
				return count;
			}
		
		}
		return count;
		

	}

}
