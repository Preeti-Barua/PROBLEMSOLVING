#include<stdio.h>
#include<conio.h>
//#include<conio.h>
//#include<string>
int main()
{
					int t,count=0,i;
		             scanf("%d",&t);
					while(t--)
					{
						int n,num=0;
						char s[26];
						scanf("%d",&n);
						scanf("%s",&s);
						
						for(i=0;i<n;i++)
						{
									if((s[i]>'0'&&s[i]<'9')&&(s[i+1]>'0'&&s[i+1]<'9'))
										
										{
											
											count++;
											
										}
										
										//count++;
									}
						}
						printf("%d",count);
					}	

