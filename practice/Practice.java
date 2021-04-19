package corejava;

import java.util.Scanner;

public class Practice {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		Scanner sc=new Scanner(System.in);
		String n=sc.next();
		
	
		
			char[] a=n.toCharArray();
		
			
			     for(int i=0;i<n.length();i++)
			     {
			    	 a[i]=(char) ((int)a[i]-(int)'0');
			     }
				
		      
	
		int sum1=0;
		int sum2=0;
	
		
		
		for(int i=0;i<a.length/2;i++)
		{
			sum1=sum1+a[i];
			
		}
		
		for(int i=a.length/2;i<a.length;i++)
		{
		
			sum2=sum2+a[i];
		}
		
		if(((int)sum1==(int)sum2)) 
		{
			System.out.println("YES");
		}
		else
		{
			System.out.println("NO");
		}
		
		
	

		
		
		
		
		
		
		
		
		
		

	}

}
