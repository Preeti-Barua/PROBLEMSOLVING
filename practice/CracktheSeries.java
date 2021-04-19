import java.util.ArrayList;
import java.util.Scanner;

public class CracktheSeries {

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int series=1;
		
		if(n==1)
		{
			System.out.println(2);
		}
		else {
			for(int i=1;i<n;i++)
			{
				
				series=series*2;
		
			}
			System.out.println(series);
		}
	
	
	
		
		

	}

}

/*
 *  2 2 4 8 16 
 *  1 2 3 4 5

 * 
 * */
 