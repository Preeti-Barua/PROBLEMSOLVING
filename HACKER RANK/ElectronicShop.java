import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class ElectronicShop {

	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
		
		Scanner sc= new Scanner(System.in);
		int b=sc.nextInt();
		int m=sc.nextInt();
		int n=sc.nextInt();
		int A[]= new int[m];
		int C[]= new int[n];
		
		for(int i=0;i<m;i++)
		{
			A[i]=sc.nextInt();
		}
		for(int j=0;j<n;j++)
		{
				C[j]=sc.nextInt();
		}
	
		ArrayList<Integer>al= new ArrayList<Integer>();
		
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(A[i]+C[j]<=b)
				{
					//System.out.println(A[i]+C[j]);
					al.add(A[i]+C[j]);
					
				}}}
		if(al.isEmpty())
		{
			System.out.println("-1");
		}
		else
		{
			int o=Collections.max(al);
			System.out.println(o);
			
		}
	}

}

//8
//5
//6
//3
//9
