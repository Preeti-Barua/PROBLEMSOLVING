#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;

	//	scanf("%d",&n3);
				printf("enter n:");
				scanf("%d", &n);
				int arr[20];
				for(i=0;i<n;i++)
				{
					scanf("%d",&arr[i]);
				}
				for(i=0;i<n;i++)
				{
					     arr[i]=arr[i]+arr[i+1];
					     arr[i]=arr[i+1];
					     arr[i+1]=arr[i+2];
					     
				}
				printf("%d",arr[i]);
	
	
	
		
		
}
