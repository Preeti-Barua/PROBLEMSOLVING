/* Harry wants to find Voldemort's potion making book but he is confused about how to get it.

The book has a special ISBN(International Standard Book Number) which is  unique numeric book identifier only for Voldemort's book printed on it. The ISBN is based upon a 10-digit code. The ISBN is valid if:
1xdigit1 + 2xdigit2 + 3xdigit3 + 4xdigit4 + 5xdigit5 + 6xdigit6 + 7xdigit7 + 8xdigit8 + 9xdigit9 + 10xdigit10 is divisible by 11.
Help Harry to find the book!
Input:
 Input the ISBN code as a 10-digit integer.

Output:
If the ISBN is not a 10-digit integer, output the message �Illegal ISBN� and terminate the program.
If the number is 10-digit, extract the digits of the number and compute the sum as explained in the explanation.
If the sum is divisible by 11, output the message, �Legal ISBN�. If the sum is not divisible by 11, output the message, �Illegal ISBN�.

SAMPLE INPUT 
1401601499
SAMPLE OUTPUT 
Legal ISBN */
#include<stdio.h>
#include<conio.h>
#include<String.h>
int main()
{
	             
				 char  s[100];
				 int i,count=0,sum=0;
	             //printf("enter s?");
	             scanf("%s",&s);
	             int len=strlen(s);
				 printf("%d",len);
				 printf("\n");
				  if(len==10)
				  {
				  
				 for(i=0;s[i]!='\0';i++)
				 {
				 	  sum+=(i+1)*s[i];
				 }
				 if(sum%11==0)
				 {
				 	printf("legal ISBN ");
				 }
			}
			else{
				printf("illegal ISBN");
			}
				 
}
