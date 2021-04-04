import java.util.Scanner;

public class DivisibilityProblem {

	public static void main(String[] args)
	{
		// TODO Auto-generated method stub

		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		for(int i=0;i<t;i++)
		{
			int a=sc.nextInt();
			int b=sc.nextInt();
			int count=0;
			while(a%b!=0)
			{
				a++;
				count++;
			}
			
			System.out.println(count);
			
			
		}
	}

}
