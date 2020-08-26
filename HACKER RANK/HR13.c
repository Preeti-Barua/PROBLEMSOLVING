#include<stdio.h>
int main()
{
	            int n,d,max,i,l;
	            int arr[n];
	            scanf("%d", &n);
	           scanf("%d", &d);
	            for(i=0;i<n;i++)
	            {
	            	scanf("%d", &arr[i]);
				}
				  max=arr[0];
				  for(i=1;i<n;i++)
				  {
				  	
				  		  if(arr[i]>max)
							{
							max= arr[i];
							 } 
					}
					
				  
				 // printf("%d",max);
			
		   /*
			if (max<d)
			{
				  l= d-max;
				  printf("%d", l);
			}
			*/
			
			if(max==d)
			{
				printf("0");
				
			}
				if (max<d)
			{
				  l= d-max;
				  printf("%d", l);
			}
			
			
		}
				
	            

