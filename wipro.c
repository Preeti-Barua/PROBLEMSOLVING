#include<stdio.h>
int main()
{
  int res=0,a,b;
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=a=b=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum) 

{
	 
	   while(a>0)
	   {
	   	   int s= a%10;
	   	    
	   	
	   	    if((s%2==0)&&(s!=0))
	   	    {
	   	    	    res = res+s;
	   	    
	   	    	  
	   	    }
	   	    	    	  a=a/10; 
	   	    	    	  
	   	    }
	   printf("%d  ",res);

	  
   }
   
int result;

   if(temp!=sum)
   
   {
   	  while(b>0)
	   {
	   	   int s= b%10;
	   	
	   	
	   	    if(s%2==1)
	   	    {
	   	    	   
				 result = result+s;
			
	   	    	    
     	   	}
	   	       b=b/10;
		  
		   
   }
    printf("%d ",result);
    
}
}
