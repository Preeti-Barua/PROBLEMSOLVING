/* Given a array of length N, at each step it is reduced by 1 element. In the first step the maximum element would be removed, while in the second step minimum element of the remaining array would be removed, in the third step again the maximum and so on. Continue this till the array contains only 1 element. And print that final element remaining in the array.

Input:
The first line contains a single integer T i.e. the number of test cases. The first line of each test case consists of a single integer N. The second and last line of each test case contains the N spaced integers .

Output:
Fore each test case in new line print the final remaining element in the array.

Constraints:
1 <=T <= 100
1 <= N <= 1000
1 <= Ai <= 1000
 

Example:
Input:
2
7
7 8 3 4 2 9 5
8
8 1 2 9 4 3 7 5

Ouput:
5
4 */
#include<stdio.h>
#include<conio.h>
int main()
{
	int T,N,i,M,j;
	int a[20];

	
//	printf("how many test cases???");
	scanf("%d",&T);
	while(T--)
	{
	
//	printf("limit??:");
	scanf("%d",&N);
	for( i=0;i<N;i++)
	{
		scanf("%d", &a[i]);
	}
	//sorting!
	
/*	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("after sorting:");
	for(i=0;i<N;i++)
	{
		printf("%d\n\n\n",a[i]);
	}
	*/
//	printf("the remaining value is:");

	printf("%d",a[N/2]);
}

}
