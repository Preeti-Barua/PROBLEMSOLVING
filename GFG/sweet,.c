#include<stdio.h>
#include<conio.h>
int main()
{
	                 int T,a,b,c,h,e;
	                 scanf("%d",&T);
	                 while(T--)
					 {
					 
	                 scanf("%d %d %d", &a, &b,  &c);
	                  h= c-a;
	                  e= b-c;
	                  if(h>e)
	                  {
	                  	printf("cat B");
	                  	
					  }
					  else if ( h==e)
					  {
					  	printf("mouse C");
					  }
					  else{
					  	printf("cat A");
					  }
				}
		}
	                  

