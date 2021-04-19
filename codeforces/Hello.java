import java.util.ArrayList;
import java.util.ListIterator;
import java.util.Scanner;

public class Hello
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        ArrayList<Integer>al=new ArrayList<Integer>();
        int prime[]=new int[100];
        int count=0;
        int pos=0;
        
       
        for(int i=2;i<100;i++)
        {
        
        	for(int j=1;j<=i;j++)
        	{
        		if(i%j==0)
        		{
        			count++;
        		}
        	}
        	
        	if(count==2)
        	{
        		//System.out.println(i);
        		al.add(i);
        		
        			//prime[pos++]=i;
        		//	pos++;
        		
        	}
        	count=0;
        }

        	
        	int index=al.indexOf(a);
        	int value=al.get(index+1);
        	
        	if(b==value)
        	{
        		System.out.println("YES");
        	}
        	else
        	{
        		System.out.println("NO");
        	}
        	
        	
        	
        	
        
        
        
      
        

    
    }
}


/*
 * we can store all prime number from 2 to 50 
 * in the array
 * 
 * and the search for element and check weather the next is also there or not 
 * 
 * 
 * 
 * 
 * 
 * */
