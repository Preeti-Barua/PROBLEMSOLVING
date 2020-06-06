/* Given a number N. Your task is to check whether it is fascinating or not.
Fascinating Number : When a number( 3 digit or more) is multiplied by 2 and 3 ,and when both these products are concatenated with the original number, then it results in all digits from 1 to 9 present exactly once.

Input:
First line contains number of test cases T. Then following T lines contains a positive integer N.

Output:
Print "1" (without quotes) if given number is fascinating else "0" (without quotes) .

Constraints:
1 <= T <= 200
100 <= N <= 107

Example:
Input:
3
192 */
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20];

	int i,j,temp,T,N;
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
		for( i=0;i<N;i++)
	{
		printf("%d\n", a[i]);
	}
	printf("\n\n");
	//reverse

	for(i=0,j=N-1;i<j;)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
		
		
	}
                 //printing reverse
	
	for(i=0;i<N;i++)
	{
	
	printf("%d",a[i]);
    	}
	
	
}
}
