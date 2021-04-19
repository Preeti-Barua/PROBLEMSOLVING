#include<stdio.h>
#include<conio.h>
int main()
{
	int p,q,k;
	
	
	scanf("%d %d", &p,&q); //taking inputs
	for(k=p;k<=q;k++)
	{
	
       	     int count=0,i;
		    int a=k;
	      	int temp=a;
   			int happy=0;
    		for(i=0;i<10;i++)
			{
	
	 
				   	count++;           //counting iterations
					int sum=0;  
					while(a!=0)
					{
			
							int c=a%10;   
							sum=sum+(c*c);
							
							 a=a/10;
			 
					}
		
		
				    if(sum==1)
					{
							happy=1;
							break;
					}
					a=sum;
				
		
			}		
					if(happy==1)
					{
					 	 printf("%d %d\n",temp,count+1);
				     }	
    }
	    
	    
				
}



