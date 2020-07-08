
/*This time your task is simple.

Given two integers X and K, find the largest number that can be formed by changing digits at atmost K places in the number X.

Input:

First line of the input contains two integers X and K separated by a single space.

Output:

Print the largest number formed in a single line.

Constraints:
1<=x<=10 to the power 18
0<=k<=9


SAMPLE INPUT 
4483 2
SAMPLE OUTPUT 
9983 */#include<stdio.h>
#include<conio.h>
int main()
{  
                     char x[100];
	                 int k,counter=0;
	                 printf("enter x:");
	                 scanf("%s",&x);
	                 printf("enter k:");
	                 scanf("%d",&k);
	                 int i=0;
	                 while(i<k)
	                 {
	                 	if(x[i]!='9')
	                 	{
	                 		x[i]='9';
	                 		i++;
						 }
						 
					 }
					 printf("%s",x);
	                 
}
