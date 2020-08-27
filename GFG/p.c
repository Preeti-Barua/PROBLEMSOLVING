#include<stdio.h>
#include<conio.h>
int calculateheight(int n)
{
	int height=1;
	int i;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			height++;
			
		}
		else{
			height*=2;
			}
				 
	}
	return height;
}
int main()
{
	            int t,n;
	            scanf("%d",&t);
	            while(t--)
	            {
				
	            scanf("%d",&n);
	            int height = calculateheight(n);
	            printf("%d",height);
	        }
	        return 0;
	      }
	      
			
	            

