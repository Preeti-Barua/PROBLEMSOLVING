//package codeforces;

//https://codeforces.com/problemset/problem/4/A

import java.util.Scanner;

public class Watermelon {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		    Scanner s= new Scanner(System.in);
		    int input= s.nextInt();
		    int a = 0;
	
		    if(input<=2)
		    {
		    	System.out.println("NO");
		    }
		    
		    else  if(input%2!=0)
		    {
		    	System.out.println("NO");
		    }
		    
	
		    if(input>2)
		    {
		    
		    	       a=input-2;
		    	      if( a %2==0)
		    	      {
		    	    	  System.out.println("YES");
		    	      }
		    	  
		    }
		    

			 
	}

}
