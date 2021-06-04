
import java.util.ArrayList;
import java.util.Scanner;

public class AppendandDelete {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int A[]=new int[n];
		int aux[]=new int[101];
		ArrayList<Integer>al= new ArrayList<Integer>();
		int maxi = 0;
		int countno=0;
		
		for(int i=0;i<n;i++)
		{
			int no=sc.nextInt();
			A[i]=no;
			aux[no]++;
			
		}
	
		int highest=max(aux);
	
		for(int i=0;i<n;i++)
		{
			if(A[i]!=highest)
			{
				countno++;
			}
		}
		System.out.println(countno);
	}
	
	
		
				private static int max(int[] aux)
				{
					int maxi = 0;
					
					for(int freq: aux)
					{
						if(freq>maxi)
						{
							maxi=freq;
						}
					}
					return maxi;
				}
				


	

}


