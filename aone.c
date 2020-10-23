#include<stdio.h>

int overridden(int [], int  );
int main()
{
	   int arr[1000];
	   int n,i,j;
	   scanf("%d",&n);
	   for(i=0;i<n;i++)
	   {
	   	scanf("%d",&arr[i]);
	   }
	   int result=overridden( arr, n );
	   printf("%d",result);
	   
}

int overridden(int arr[], int n)
{
	   int i,j;
	   
	   for(i=0;i<n;i++)
	   {
	   	for(j=i+1;j<n;j++)
	   	{
	   		
	   		if(arr[i]>arr[j])
	   		{
			   
	   		    int temp= arr[i];
	   		    arr[i]=arr[j];
	   		    arr[j]=temp;
	   		}
		   }
	   }
	   
	   for(i=0;i<n;i++)
	   {
	   	if(arr[i+1]-arr[i]!=1)
	   	{
	   		break;
		   }
	   }
	   int o= arr[i]+1;
	   return 0;
}

	   
	  

