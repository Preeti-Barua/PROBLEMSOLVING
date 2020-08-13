//https://mycode.prepbytes.com/problems/fundamentals/TWOTEN

//TEN FROM TWO
#include<stdio.h>

int main()
{
	              int T,n,p;
	         
	              scanf("%d",&T);
				  while(T--)
				  {
				  	
				  	scanf("%d",&n);
				  
				  	if(n%10==0)
				  	{
				           printf("0");
				           printf("\n");
				           
					  }
					  else if(n%10!=0)
					  
					 {
					    p =n*2;
					    if(p%10==0)
					    {
					      printf("1");
					      printf("\n");
					    }
					    else{
					      printf("-1");
					      printf("\n");
					    }
					 }
						  
					
						}
}
					  	
					  
				  
				  
