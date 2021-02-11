 
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.Scanner;

public class MigratoryBirds {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc= new Scanner(System.in);
	    int n=sc.nextInt();
	    int A[]= new int[n];
		
	  
		for (int i=0;i<n;i++)
		{
			A[i]=sc.nextInt();
			
		}
	
		int count1=0;
		int count2=0;
		int count3=0;
		int count4=0;
		int count5=0;
ArrayList<Integer>al= new ArrayList<Integer>();

	for(int i=0;i<n;i++)
	{
		
			if(A[i]==1)
			{
				count1++;
			}
			if(A[i]==2)
			{
				count2++;
			}
			if(A[i]==3)
			{
				count3++;
			}
			if(A[i]==4)
			{
				count4++;
				//System.out.println(4);
			}
			if(A[i]==5)
			{
				count5++;
			}
	}
	HashMap<Integer,Integer>hm= new HashMap<Integer,Integer>();
	hm.put(count1, 1);
	hm.put(count2, 2);
	hm.put(count3, 3);
	hm.put(count4, 4);
	hm.put(count5, 1);
	 System.out.println(hm);

			al.add(count1);
			al.add(count2);
			al.add(count3);
			al.add(count4);
			al.add(count5);
		
			 Integer max = Collections.max(al);
			// System.out.println(hm);
			 System.out.println(max);
			 int m=hm.get(max);
			 
			// System.out.println(m);
			 
			 
			 


	    
	
	}
		  
}

		
		

