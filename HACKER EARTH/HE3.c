#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	 					char S[100];
	 			  	scanf("%s",&S);
	 					
	 					
	 					int l=0;
	 					int h=strlen(S)-1;
	 					while(h>l)
	 					{
	 						if(S[l++] != S[h--])
	 						{
	 							printf("NO");
	 							return ;
							 }
						 }
				     	printf("YES");
}

