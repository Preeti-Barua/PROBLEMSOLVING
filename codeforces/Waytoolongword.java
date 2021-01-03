package codeforces;


//https://codeforces.com/problemset/problem/71/A
import java.util.Scanner;

public class Waytoolongword {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner(System.in); 
		int input= sc.nextInt();

		sc.nextLine();
		for(int i=0;i<input;i++)
		{
			
	//	System.out.println("h");
			char[] a=sc.nextLine().toCharArray();
			  int count=0;
			   for(int j=0;j<a.length;j++)
			   {
				   count++;
			   }
			 
			   
			   if(count<=10)
			   {
				   System.out.println(a);
			   }
			 
			   else
			   {
				   
				   System.out.println(a[0]+ "" +(count-2)+""+a[count-1]);
			   }
			  
		}

	}

}
