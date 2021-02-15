

import java.util.HashSet;
import java.util.Scanner;


public class SalesBymatch {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner ac= new Scanner(System.in);

		int  n=ac.nextInt();
	    int count=0;
		int A[]=new int[n];
		
		
		for(int i=0;i<n;i++)
		{
			A[i]=ac.nextInt();
		}
		
		HashSet<Integer>set=new HashSet<Integer>();
	       for(int i=0;i<n;i++)
	       {
	    	   int element=A[i];
				if(set.contains(element))
				{
					set.remove(element);
					count++;
				}
				else
				{
					set.add(element);
			    }
			}
	       
	     System.out.println(count);
	       }

}
