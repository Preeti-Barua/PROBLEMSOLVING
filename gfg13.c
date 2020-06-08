/* Given a binary array A[] of size N. The task is to arrange the array in increasing order.

Note: The binary array contains only 0  and 1.

Input:
The first line of input contains an integer T, denoting the test cases. Every test case contains two lines, the first line is N(size of the array) and the second line is space-separated elements of the array.

Output:
Space-separated elements of sorted arrays. There should be a new line between the output of every test case.

Your Task:
Complete the function SortBinaryArray() which takes given array as input and returns the sorted array. 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Challenge: Try doing it in one pass.

Constraints:
1 < = T <= 100
1 <= N <= 106
0 <= A[i] <= 1

Example:
Input:
2
5
1 0 1 1 0
10
1 0 1 1 1 1 1 0 0 0
Output:
0 0 1 1 1
0 0 0 0 1 1 1 1 1 1 */
#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[20];
	int N,T,i,D;
	printf("enter testcases::");
	scanf("%d",&T);
	while(T--)
	{
	printf("limit??:");
	scanf("%d",&N);

	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<N;i++)
	{
	
		printf("%d",arr[i]);
	}
	printf("\n");
	
	
	for(i=0;i<N;i++)
	{
		if(arr[i]==0)
		{ 
		       printf("%d",arr[i]);
			
		}

	}
		for(i=0;i<N;i++)
	{
		if(arr[i]==1)
		{ 
		       printf("%d",arr[i]);
			
		}
		printf("/n");
	
	}
}


		
}
