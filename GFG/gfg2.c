/*
You are given an array A of size N. You need to print elements of A in alternate order.

Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each test case contains two lines of input. The first line contains N and the second line contains the elements of the array.

Output Format:
For each testcase, print the alternate elements of the array(starting from index 0).

Your Task:
Since this is a function problem, you just need to complete the provided function void print(int ar[],int n)

Constraints:
1 <= T <= 200
1 <= N <= 105
1 <= Ai <= 105

Example:
Input:
2
4
1 2 3 4
5
1 2 3 4 5
Output:
1 3
1 3 5
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int N,no,i,I;
	int a[100];
	
	printf("enter N:");
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<N;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n\n\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",a[i]);
		i++;
	
	}}
	
