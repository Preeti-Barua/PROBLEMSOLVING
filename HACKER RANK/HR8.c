#include<stdio.h>
int main()
{
	         int s[100];
	         int i,n,j;
	       int count;
	     
	         scanf("%d",&n);
	         for(i=0;i<n;i++)
	         {
	         	scanf("%d",&s[i]);
	         }
	         count=0;
	         for(i=0;i<n;i++)
	         {
	        
	         	if(s[i]!=0)
	         	{
				 
	         		
				 
	         	for(j=i+1;j<n;j++)
	         	{
	         		
	         		if(s[i]==s[j])
	         		{
	         			count++;
	         			s[j]=0;
	         			break;
	         			
	         			
					 }
				 }
	    
	         	
	         	   
			 }
		}
			      	printf("%d  ",count);
	        
	         
	         	
	     
			 
	         
	
	  
}
