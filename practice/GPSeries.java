import java.util.Scanner;

public class GPSeries {

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		
		
		Scanner sc=new Scanner (System.in);
		int a=sc.nextInt();
		int b=sc.nextInt();
		
		int nth=sc.nextInt();
		
		int diff=b/a;
		System.out.println(diff);
		int n=0,k=0;
		
		
		for(int i=3;i<nth;i++)
		{
			 k=b*diff;   //9*3=27
			 b=k;
			
		}
		System.out.println(k);
		

	}

}
