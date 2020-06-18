/*Given an array which contains all elements occurring k times, but one occurs only once. Find that unique element.

Input:
The first line consists of an integer T i.e number of test cases. The first line of each test case consists of two integers n and k. The next line consists of n spaced integers. 

Output:
Print the required output.

Constraints: 
1<=T<=100
2<=k<n<=100
1<=a[i]<=10000

Example:
Input:
2
7 3
6 2 5 2 2 6 6 
5 4
2 2 2 10 2

Output:
5
10 */

#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100];
	int n,i,j,c,ans,T;
//	printf("enter the T:");
	scanf("%d",&T);
	T=0;
	while(T--)
	{
	
	
//	printf("enter the n:");
	scanf("%d",&n);

//	printf("enter the elements::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}

	printf("\n");
	for(i=1;i<=n;)
	{
			c=0;
		for(j=1;j<=n;j++)
		{
		
			if(arr[i]==arr[j])
			{
				c++;
			}
			
		}
		if(c==1)
		{
			ans=arr[i];
			printf("%d",ans);
			
			break;
		}
		i++;
		
	}
}
	return 0;
	
}
