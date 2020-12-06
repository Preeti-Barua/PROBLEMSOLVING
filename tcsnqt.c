/* 
Question 2 : Alex has been preparing a box for handicraft. The box consists of N pieces of stones with each stone having a certain weight assigned to it. Each stone in the box will carry a different weight. This means no two stones can have the same weight

Alex wants to do this by making minimal changes in the original weight at least as much as its original weight

Find the minimum total weight that he can set for the box.

Note: Stone weight are not in float value.


Input

First input contains N, the total number of stones in the box
Second Input contains N sorted integers separated by newline A1, A2...An, representing the original weights assigned to each stone violation of input criteria: System should display message as “Wrong Input”.

Output

The minimum total stone weights Alex can set the box for

Constraints

1<=N<=100000

1<=A[i]<=100000


Example 1:

Input

3

2

2

4

Output

9

Explanation

As two stones have the same weight; the max weight for one of them need to be incremented to 3.

Alex can ste the box with 2+3+4 = 9 weights.


Example 2:

Input

2

3

4

5

Output

Wrong Input

Explanation

Here N=2, so we need to provide weight of only two stones but, we are providing weight of three stones. So result is “Wrong Input”


*/



#include<stdio.h>
#include<conio.h>

int main()
{
	    int A[100];
	    int i,n,count=0,sum=0;
	    
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	    	scanf("%d",&A[i]);
		}
		
		
		for(i=0;i<n;i++)
		{
			
		    if(A[i]!=0)
		    {
			count++;
	     	}
    	}
    	 
		if(n==count)
		{
			for(i=0;i<n;i++)
			{
			   if(	A[i]==A[i+1])
				{
					A[i+1]++;
				}
				
				sum=sum+A[i];
			}
			
			printf("%d",sum);
		}
		else
		{
			printf("Invalid output");
		}
	
	
	
}





