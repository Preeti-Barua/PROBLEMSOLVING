#include<stdio.h>
#include<conio.h>
int main()
{
	
	
	
						char S[1000],i;
						
						int j,count;
						scanf("%s",S);
						for(i=48;i<=57;i++)
						{
						    count=0;
						for(j=0;j<strlen(S);j++)
						{
							if(S[j]==i)
							{
								count++;
							}
						}
						printf("%d",count);
					}
				}
						
					

	
	

