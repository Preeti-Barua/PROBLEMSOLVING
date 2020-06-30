/*  You are required to enter a word that consists of  and  that denote the number of Zs and Os respectively. The input word is considered similar to word zoo if .

Determine if the entered word is similar to word zoo.

For example, words such as zzoooo and zzzoooooo are similar to word zoo but not the words such as zzooo and zzzooooo.

Input format

First line: A word that starts with several Zs and continues by several Os.
Note: The maximum length of this word must be 20.
Output format

Print Yes if the input word can be considered as the string zoo otherwise, print No.

SAMPLE INPUT 
zzzoooooo
SAMPLE OUTPUT 
Yes
Explanation */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
					char St[20];
					int i,Zcount=0,Ocount=0;
					//printf("enter the string:: ");
					scanf("%s",&St);
			        for(i=0;St[i]!='\0';i++)
			        {
			        	if(St[i]=='z')              
			        	{
			        		Zcount++;
						}
						else
						{
							Ocount++;
						}
							
					}
				     	printf("\n");
					
					if(Zcount*2==Ocount)
					{
						printf("YES");
					}
					else
					{
						printf("NO");
					}
					
					
					
					
}
