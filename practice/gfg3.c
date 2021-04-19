#include<stdio.h>
#include<conio.h>
#include<limits.h>

int main()
{
	int arr[10]={6,4,9,3,7,8};
	int i,l,s;
	printf("the array is::::");
		for(i=0;i<=8;i++)
	{
		printf("%d     ",arr[i]);
	}
	printf("\n");
	l=s=-1;
	for(i=0;i<=8;i++)
	{
		if(arr[i]>l)
		{
			s=l;
			l=arr[i];
		}
		else if(arr[i]>s && arr[i]!=l)
		{
			s=arr[i];
			}	
	}
	printf("the second elements is %d" , s);
	
	
	
}
