#include<stdio.h>
#include<conio.h>
int main()
{
	    int n,d,sum=0,i;
	    scanf("%d",&n);
	    scanf("%d",&d);
	    for( i=n;i<=d;i+=n)
	    {
	    	sum=sum+i;
		}
		printf("%d",sum);
}
