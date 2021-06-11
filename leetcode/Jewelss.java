import java.util.Scanner;

public class Jewelss {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc=new Scanner(System.in);
		String s=sc.next();
		
		String stones=sc.next();
		
		int count=0;
		
		
			for(int j=0;j<stones.length();j++)
			{
				if(s.indexOf(stones.charAt(j))>-1)
					
				{
					count++;
				
				}
				
				
			}
		
		System.out.println(count);
	//	System.out.println(stones.indexOf(s));

	}

}
