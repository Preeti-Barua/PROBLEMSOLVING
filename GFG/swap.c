/* Given an array of size N, swap the kth element from beginning with kth element from end.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each testcase contains 2 lines of input:
The first line contains an integer N, where N is the size of array.
The second line contains N integers(elements of the array) sperated with spaces.

Output:
For each test case, print the modified array.

Constraints:
1 = T = 200
1 = K = N = 500
1 = A[i] = 1000

Example:
Input
1
8 3
1 2 3 4 5 6 7 8
Output
1 2 6 4 5 3 7 8*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int T,N,i,M;
	int a[20];

	
//	printf("how many test cases???");
	scanf("%d",&T);
	while(T>0)
	{
//	printf("limit??:");
	scanf("%d",&N);
	for( i=0;i<N;i++)
	{
		scanf("%d", &a[i]);
	}
//	printf("in what position you want to interchange the value??--");
	scanf ("%d",&M);
	int temp;
	temp=a[M-1];
	a[M-1]=a[N-M];
	a[N-M]=temp;
	
	for(i=0;i<N;i++)
	{
		printf("%d \n\n\n",a[i]);
		
	}
	T--;
	
	}
}
