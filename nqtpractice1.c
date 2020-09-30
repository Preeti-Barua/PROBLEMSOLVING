//0,0,7,6,14,12,21,18, 28
#include<stdio.h>
int main()
{
	        int n,i;
	        scanf("%d", &n);
	        int a=0,b=0;
	        for(i=1;i<=n;i++)
	        {
	        	if(i%2!=0)
	        	{
	        		a=a+7;
				}
				else{
					b=b+6;
				}
			}
	        
	        if(n%2!=0)
	        {
	        	printf("%d term of the series is %d" , n,a-1);
			}
			else{
					printf("%d term of the series is %d" , n,b-1);
			}
	        
}
