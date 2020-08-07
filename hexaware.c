#include<stdio.h>
int main()
{
	int n,T,count;
	scanf("%d",&T);
	int i=0;
	while(T--)
	{
		count=0;
		scanf("%d",&n);
		for(i=2;i<=n;i++)
		{
			if(i%2==0)
			{
			
			if(n%i==0)
			   {
				    count+=1;
			    }
			}
			
		}
			printf("%d\n",count);
		}
	}
	

