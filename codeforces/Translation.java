package codeforces;
//https://codeforces.com/problemset/problem/41/A
import java.util.Scanner;

public class Translation {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc= new Scanner(System.in);
		String a=sc.nextLine();
		String b=sc.nextLine();
		StringBuilder c= new StringBuilder();  //immutable
		
	    c.append(a);     //appending the string a in c 
	  
	
		c.reverse();     //reversing the string
		
	

		if(b.contentEquals(c))                   //stringbuilder uses contentEquals 
		{
			System.out.println("YES");
		}
		else
		{
			System.out.println("NO");
		}

		
	}
}
		
		

	



