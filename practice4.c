#include<stdio.h>
int main()
{
	             int A[]={1,2,3,4,2,5};
	             int i,j;
	             
	             
	             for(i=0;i<5;i++)
	             {
	             	for(j=i+1;j<5;j++)
	             	{
	             		if(A[i]==A[j])
	             		{
	             			printf("%d",A[i]);
						 }
	             		 
					 }
				 }
	             
	             
}
