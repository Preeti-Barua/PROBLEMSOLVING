/*
Given an array A[] of N integers and an index I. Your task is to print the element present at index I in the array.

Input:
First line of input contains an integer T, which denotes the number of testcases. For each testcase,  there will be two lines. The first line contains two space separated integers N and I, where N denotes the number of elements in the array and I denotes the index whose element has to be printed, and second line contains N space separated integers which denotes the elements of array.

Output:
For each testcase in a new line, print the element present at index I.

Constraints:
1 <= T <= 10
1 <= N <= 100
0 <= I <= N - 1
1 <= A[i] <= 100

Example:
Input:
2
5 2
10 20 30 40 50
7 4
10 20 30 40 50 60 70

Output:
30
50
*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int N,no,i,I;
	int a[100];
	
	printf("enter N:");
	scanf("%d",&N);
	printf("enter index number which you want to fetch :");
	scanf("%d",&I);
	printf("enter the numbers::");
	for ( i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array is::::\n");
	for(i=0;i<N;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
	for(i=0;i<N;i++)
	{
		if(i==I)
		{
			printf("%d",a[i]);
		}
	}
   

	
	
}
