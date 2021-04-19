/*Given an array of size N and you have to tell whether the array is perfect or not. An array is said to be perfect if it's reverse array matches the original array. If the array is perfect then print "PERFECT" else print "NOT PERFECT".

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an integer N (size of the array)and the second line contains N elements a0,a1,......aN-1 of an array .

Output:
For each test case, print either "PERFECT" or "NOT PERFECT" in new line as your answer.

Constraints:
1<=T<=100
1<=N<=100
1<=ai<=1000

Example:
Input:
2
5
1 2 3 2 1
5
1 2 3 4 5 */
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10];
	int i,j,N,k=0;
	printf("enter limit:::");
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<N/2;i++)
	{
	    	if(a[N-i-1]==a[i])
	    	{
	    		k++;
		}
		printf("%d  ",k);
		
		
	}
	if(k==N/2)
	{
		printf("perfect!");
	}
	else
	{
		printf("not perfect");
	}
}
