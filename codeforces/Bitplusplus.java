package codeforces;



//http://codeforces.com/problemset/problem/282/A

import java.util.Scanner;

public class Bitplusplus {
	
	public static void main(String args[])
	{
	
	Scanner in = new Scanner(System.in); 
	int input= in.nextInt();
    int i,x=0;
           
          while(input-- >=1)
          {
        	  String operation=in.next() ;
        	  if(operation.charAt(0)=='X') 
        	  {
        	
        		  if(operation.charAt(1)=='+')
        	     {
        		   x++;
        	      }
        	  
        	   if(operation.charAt(1)=='-')
               {
        		  x--;
        	       }
        	   
        	  
        	  }
        	  else if(operation.charAt(0)=='+') 
        	  {
        		  ++x;
        	  }
        	  
        	  else 
        	  {
        		  --x;
        	  }
          
          }
	
          System.out.println(x);
	
	

}
}


