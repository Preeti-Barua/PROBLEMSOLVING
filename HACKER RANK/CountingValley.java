import java.util.Scanner;

public class CountingValley {

	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		int b=sc.nextInt();
		
		
		String a=sc.next();
		
		int altitude=0;
		int countvalley=0;
		
		for(int i=0;i<b;i++)
		{
			if(a.charAt(i)=='U') 
			{
				altitude++;
				if(altitude==0)
				{
					countvalley++;
				}
			}
			
			
			else
			{
				altitude--;
			}
		}
		System.out.println(countvalley);
		

	}

}
