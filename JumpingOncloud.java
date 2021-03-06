import java.util.Scanner;

public class JumpingOncloud {

	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int c[]=new int[n];
		for(int i=0;i<n;i++)
		{
			c[i]=sc.nextInt();
		}
		
		int len=c.length;
		int count=-1;
		for(int i=0;i<n;)
		{
			if(i+2 <len && c[i+2]==0)
			{
				i=i+2;
			}
			else
			{
				i=i+1;
				
			}
			count++;
		}
		System.out.println(count);
		
		

	}

}
