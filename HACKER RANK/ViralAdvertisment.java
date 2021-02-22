
import java.util.Scanner;

public class ViralAdvertisment 
{
	//https://www.hackerrank.com/challenges/strange-advertising/problem

	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
		Scanner input=new Scanner(System.in);
	    int a=input.nextInt();
	    int people =5;
	    int totallikedtillday=0;
	  
	    	
	   for(int i=0;i<a;i++)
	   {
		 int liked=people/2;
	   	 totallikedtillday=totallikedtillday+liked;
	   	 people=liked*3;
	   }   
	    System.out.println(totallikedtillday);
	  }}
