/*

 Popular Topic Tags
Maths
Array
Dynamic-Programming
Greedy-Algorithm
Hashing
Tree
Bit-Algorithm
Matrix
Backtracking
Operating System
Linked-List
Graph
show more


At least two greater elements Submissions: 8377   Accuracy: 47.2%   Difficulty: School   Marks: 0*School Problem's Submission isn't counted in score!
Associated Course(s):   Sudo Placement 2
        
Problems
Given an array of N distinct elements, the task is to find all elements in array except two greatest elements.

Input:
The first line of input contains an integer T denoting the number of test cases. Each test case contains two lines. The first line of input contains an integer N denoting the size of the array. Then in the next line are N space separated array elements.

Output:
For each test case in a new line print the space separated sorted values denoting the elements in array which have at-least two greater elements than themselves.

Constraints:
1<=T<=100
3<=N<=100
1<=A[]<=100

Example:
Input:
2
5
2 8 7 1 5
6
7 -2 3 4 9 -1

Output:
1 2 5
-2 -1 3 4
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int T,N,i;
	int a[100];
	printf("how many Test cases::");
	scanf("%d",&T);

	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	
	while(T>0)
	{
		int j,temp;
		printf("the Limit:");
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
		scanf("%d",&a[i]);
		}
	
		printf("\n");
		for(i=0;i<N;i++)
		{
			for(j=i+1;j<N;j++)
			{
				if(a[i]>a[j])
				{
			
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				}
			}
			printf("%d  ",a[i]);
		
			
			printf("\n");	
		}
		printf("removing the first two greatest numbers::");
		for(i=0;i<N-2;i++)
		{
			printf("  %d  ",a[i]);
		
		}
		printf("\n");
		
		T--;
	}
	
	
	
}
