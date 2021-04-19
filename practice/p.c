#include<stdio.h>
int main()
{
	
	         char s[1000],ch;
	         int count=0,i;
	         
	         printf("enter the string");
	         fgets(s,sizeof(s),stdin);
	         printf("enter the charater to find its frequency:");
	         scanf("%c", &ch);
	         
	         for( i=0;s[i]!='\0';i++)
	         {
	         	if(ch==s[i])
	         	{
				 
	         	count++;
	         }
	         	
			 }
			 printf("frequency of %c =%d",ch, count);
			 
}
