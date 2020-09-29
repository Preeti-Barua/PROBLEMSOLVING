#include<stdio.h>
void prime(int n)
{
	int count=0;
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count!=0)
	{
		printf("%d is not prime number",n);
	}
		else
	{
		printf("%d is  prime number",n);
	}
}
int main()
{
	
	          int n;
	          scanf("%d",&n);
	          if(n<0)
	          
	          {
	          	printf("enter a positive number");
	          
	          }
			  else{
			  	     prime(n);
			  }
	          

}
