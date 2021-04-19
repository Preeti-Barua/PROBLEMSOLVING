#include<stdio.h>
#include<conio.h>
int main()
{
	int n,t,sum=0;
	   scanf("%d",&n);
	   t=n;
	   while(n>0)
	   {
	   	
	   	    int a=n%10;
	   	    sum=sum+a;
	   	       
	   	    n=n/10;
	   	 
	   }
	   if(t%sum==0)
	   {
	   	         printf("Harshad Number");
	   }
	   else
	   {
	   	printf("not Harshad Number");
	   }
	   
	     //printf("%d",sum);
	   
	   
	
	
}
