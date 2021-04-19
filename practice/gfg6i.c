/*
A and B are good friend and programmers. They are always in a healthy competition with each other. They decide to judge the best among them by competing. They do so by comparing their three skills as per their values. Please help them doing so as they are busy.

Set for A are like [a1, a2, a3]
Set for B are like [b1, b2, b3]

Compare ith skill of A with ith skill of B
if a[i] > b[i] , A's score increases by 1
if a[i] < b[i] , B's score increases by 1

Input : 
The first line of input contains an integer T denoting the test cases. For each test case there will be two lines. The first line contains the skills of A and the second line contains the skills of B

Output : 
For each test case in a new line print the score of A and B separated by space.

Constraints :
1 = T = 50
1 = a[i] = 1017
1 = b[i] = 1017

Example:
Input : 
2
4 2 7
5 6 3
4 2 7
5 2 8

Output : 
1 2
0 2
*/

#include<conio.h>
#include<stdio.h>
int main()
{


	int A[10];
	int B[5];
	int M,N,i,j;
	
	
	printf("limit A::");
	scanf("%d",&N);


	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}


	

	printf("limit B::");
	scanf("%d",&M);

	for(i=0;i<M;i++)
	{
		scanf("%d",&B[i]);
	}


	
	printf("\n");
	int a=0,b=0;
	for(i=0;i<3;i++)
	{
		if((A[i]>B[i])&&(A[i]!=B[i]))
		{
			a++;
		}
		if((A[i]<B[i])&&(A[i]!=B[i]))
		{
			b++;
		}
		
	}
	printf("\n\n\n");
	printf("the score of A is:%d\n",a);
	printf("the score of B is:%d\n\n\n",b);
	if(a>b)
	{
		printf("WINNER is A");
	}
	else
	{
		printf("WINNER is B");
	}
}
