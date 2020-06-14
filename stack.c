/* You are given an array A of size N. You need to push the elements of the array into a stack and then print them while popping.

Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains two lines of input. The first line of input contains size of array N. The second line of array contains the elements of array separated by spaces.

Output Format:
For each testcase, in a new line, print the required output.

Your Task:
Since this is a function problem, you don't need to take any input. Just complete the provided functions _push() and _pop().

Constraints:
1 <= T <= 100
1 <= Ai <= 107

Examples:
Input:
2
5
1 2 3 4 5
7
1 6 43 1 2 0 5
Output:
5 4 3 2 1
5 0 2 1 43 6 1 */
#include<stdio.h>
#include<conio.h>
int top=-1;
int arr[100];
int i,N,x;
void push();
void display();
int main()
{

	printf("enter N:");
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
	
	printf("enter the element you want to insert in stack:");
	scanf("%d",&x);
	push(x);
	}
	
                    display();
	/*
	push(5);
	push(7);
	push(8);
	display();
	*/
	
	
}
void push(int x)
{
	//printf("enter the element you want to insert in stack:");
	//scanf("%d",&x);
	top++;
	arr[top]=x;
	printf("the %d is pushed.",x);
	printf("\n");
}

void display()
{
	printf("the stack elements are:");
	   for(i=top;i>=0;i--)
	   {
	   
	   	printf(" %d",arr[i]);
	   }
	
}
	
	
	
	
	
	

