import java.util.ArrayList;
import java.util.Scanner;

public class Lily {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc=new Scanner(System.in);
		int num1=sc.nextInt();
		int num2=sc.nextInt();
		int divisor=sc.nextInt();
	
		ArrayList<Integer>al= new ArrayList<Integer>();
		float ans,divide;
		int  count=0,count1=0;
		for(int css=num1;css<=num2;css++)
		{
			int temp=css;
			int copy=css;
			//System.out.println("the copy is:"+copy+" & temp is:"+temp);
			int sum=0;
			while(temp!=0)
			{
				int a=temp%10;
				sum=sum*10+a;
				temp=temp/10;
				
			}
			al.add(sum);
		//	System.out.println(al);
			count++;
		}
		for(int i=0;i<count;i++)
		{
			
			divide=num1-al.get(i);
		
		
			ans=divide/divisor;
			if(ans%1==0)
			{
				count1++;
			}
			
			num1++;
		   

		}
		System.out.println(count1);
		
	}}


