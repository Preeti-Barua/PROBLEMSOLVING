import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class MaxminSum {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		
		Scanner sc= new Scanner(System.in);
		int A[]=new int[5];
		for(int i=0;i<5;i++)
		{
			A[i]=sc.nextInt();
		}
		
		int sum=0;
		ArrayList<Integer> al= new ArrayList<Integer>();
		for(int i=0;i<5;i++)
		{
			
			sum=sum+A[i];
		
		}
		for(int i=0;i<5;i++)
		{
			int a=sum-A[i];
			//System.out.println(a);
			al.add(a);
		}
		
		
		Collections.sort(al);
		int l=Collections.min(al);
		System.out.println(l);
		int m=Collections.max(al);
		System.out.println(m);
				
		
		
	

		
		

	}

}
