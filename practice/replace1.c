/* Replace every element of the array by sum of all other elements
Last Updated: 03-10-2018
Given an array of size N, the task is to find the encrypted array. The encrypted array is obtained by replacing 
each element of the original array with the sum of the remaining array elements i.e.
Input:  arr[] = {5, 1, 3, 2, 4} 
Output: 10 14 12 13 11
Original array {5, 1, 3, 2, 4}
Encrypted array is obtained as:
= {1+3+2+4, 5+3+2+4, 5+1+2+4, 5+1+3+4, 5+1+3+2}
= {10, 14, 12, 13, 11}
Each element of original array is replaced by the 
sum of the remaining array elements.  

Input: arr[] = {6, 8, 32, 12, 14, 10, 25 }
Output: 101 99 75 95 93 97 82 */
#include<stdio.h>
int main()
{
	int arr[100],summ[100];
	int sum=0;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
		
	}
     for(i=0;i<n;i++)
	 {
	 	summ[i]=sum-arr[i];  
	 }
	  for(i=0;i<n;i++)
	 {
	 	printf("%d ", summ[i]);
	 }
	 
}
