#include<stdio.h>
#include<conio.h>
int main()
{
	   int i;         
	  int A[]={1,2,3,4,5,6,8,9,10};
	  
	  for(i=0;i<11;i++)
	  {
	  	
	  	  if(A[i+1]-A[i]!=1)
	  	  {
	  	  	  printf("%d",A[i]+1);
	  	      	break;
	  	  	
			}
	  }
	
	
	
}
