
import java.util.Scanner;

public class BillDivison {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		int k=sc.nextInt();
		int A[]=new int[n];
		for(int i=0;i<n;i++)
		{
			A[i]=sc.nextInt();
		}
		int b=sc.nextInt();
		//ArrayList<Integer>al= new ArrayList<Integer>();
		int sum=0;
		for(int i=0;i<n;i++)
		{
			if(i!=k)
			{
				sum=sum+A[i];
			}
		}
		
		int actual=sum/2;
		int finalans=actual-b;
		if(b==actual)
		{
			System.out.println("Bon Appetit");
		}
		else
		{
			System.out.println(Math.abs(finalans));
		}
		
	}

}
