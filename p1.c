#include<stdio.h>
int main()
{
	  int n,a;
	  
	  int sum=0;
	  scanf("%d",&n);
	  int temp=n;
	  while(n!=0)
	  {
	  	a=n%10;
	  
	  	sum=sum+a;

	  	n=n/10;
	  	//
	  }
	  printf("%d\n",sum);
	  
	  int d= temp/sum;
	  
	  	printf("%d",d);
	  	 
	  }
	  

