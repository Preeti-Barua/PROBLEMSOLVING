#include<stdio.h>
#include<conio.h>
int main()
{
	
	        unsigned long a,b,n;
	          int t;
	          unsigned long p,q;
	          scanf("%d",&t);
	          while(t--)
	          {
	          	 int k=1;
	          	 //scanf("%lld %lld %lld", &a, &b, &n);
	          	  scanf("%lu %lu %lu", &a, &b, &n);
	          	  while(k<n)
	          	  {
				
	          	  	     q= b-a;
	          	  	     
	          	  	     p= b+a;
	          	  	      a=q;
	          	  	      b=p;
	          	  	  
	          	  	   
	          	  	     k++;
					}
					
				//	printf("%lld %lld\n", a,b);
					
					printf("%lu %lu\n", a,b);
				
				
				
	          	  
			  }
}
