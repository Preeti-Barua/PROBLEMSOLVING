
import java.util.Arrays;

import java.util.Scanner;

//https://codeforces.com/problemset/submit/141/A

public class AmusingJoke {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner Sc=new Scanner(System.in);
		
		String s=Sc.next();
		String s1=Sc.next();
		String s2=Sc.next();
		
		String s4=s+s1;
	
		
		char array[]=s4.toCharArray();
		Arrays.sort(array);
		
		char array1[]=s2.toCharArray();
		Arrays.sort(array1);
		
		if(Arrays.equals(array,array1))
		{
			System.out.println("YES");
		}
		else
		{
			System.out.println("NO");
		}
	

		

	}

}
