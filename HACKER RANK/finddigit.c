#include<stdio.h>
#include<conio.h>
int main()
{
	       int n,a,count;
	       scanf("%d",&n);
	       
	       while(n--)
		   {
		   	count=0;
		   	   scanf("%d",&a);
		   	 
		   	    
		   	    while(a!=0)
		   	    {
				   
		   	    int q=a%10;
		   	    if(a%q==0)
		   	    {
		   	         count++;
				}
				
				else if(q==0)
				{
					count--;
				}
				
				
				a=a/10;
		     	}
		    
			
		   	    printf("%d\n",count);
		   	 }
				//	printf("%d\n",count);	    
}
