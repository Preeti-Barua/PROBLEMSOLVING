package codeforces;
//https://codeforces.com/problemset/problem/1030/A
import java.util.Scanner;

public class InSearchofanEasyProblem {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		  Scanner sc= new Scanner(System.in);
		 
		  int a=sc.nextInt();
		  int[] Arr=new int [a];
		  for(int i=0;i<a;i++)
		  {
			  Arr[i]=sc.nextInt();
		  }
		  int count=0,count1=0;
		  for(int i=0;i<a;i++)
		  {
			 if(Arr[i]==1)
			 {
				 count++;
			 }
			 
		  }
		  
		  if((count==0))
				  
			  System.out.println("EASY");
		
		  else
		  {
			  System.out.println("HARD");
		  }
		}

}
