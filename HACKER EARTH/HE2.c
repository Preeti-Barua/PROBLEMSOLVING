/* Given two strings, a and b , that may or may not be of the same length, determine the minimum number of character deletions required to make a and b anagrams. Any characters can be deleted from either of the strings.

Input :

test cases,t
two strings a and b, for each test case
Output:

Desired O/p

Constraints :

string lengths<=10000

Note :

Anagram of a word is formed by rearranging the letters of the word.

For e.g. -> For the word RAM - MAR,ARM,AMR,RMA etc. are few anagrams.

SAMPLE INPUT 
1
cde
abc
SAMPLE OUTPUT 
4*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	            char A[20],B[20];
				int i,j,count=0,Z,a,b;
				printf("enter the s1:");
				scanf("%s",&A);
				printf("enter the s2:");
				scanf("%s",&B);
				
				a=strlen(A);
				b=strlen(B);
			
			    printf("\n");
				
				for(i=0;i<a;i++)
				{
					for(j=0;j<b;j++)
					{
						if(A[i]==B[j])
						{
							     count++;
							     	B[j]='0';
						    break;
						
						}
							
					}
				}
			
				
				Z=(a+b)-(count*2);
				printf("the anagrams are:%d",Z);

}
