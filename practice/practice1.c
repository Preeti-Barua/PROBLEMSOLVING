#include<stdio.h>
#include<conio.h>
int main()
{
	   int i,res;
	   scanf("%d",&i);
	   
	   res=i*i;
	   int a=res%10;
	   
	   if(a==i)
	   {
	   	printf("Automorphic number");
	   }
	   else
	   {
	   	
	   	printf("not Automorphic number");
	   }
	   
}
