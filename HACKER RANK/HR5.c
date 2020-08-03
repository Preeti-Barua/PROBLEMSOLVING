#include<stdio.h>
#include<conio.h>
int main()
{
	           int a[10];
	           int i,n,j;
	           int max,count=0;
	           
	           
	           scanf("%d",&n);
	           for(i=0;i<n;i++)
	           {
	           	  scanf("%d",&a[i]);
	           	  
			   }
			   max=a[0];
			   for(i=1;i<n;i++)
			   {
			   
			   		 if(a[i]> max)
			   		 {
			   		 	
			   		 	 max=a[i];
					  }
					  	 
			   	}
			   	printf("%d",max);
			   	 
			   	 for(i=0;i<n;i++)
			   	 {
			   	 	
			   	 	if(max==a[i])
			   	 	{
			   	 		count++;
			   	 		
			   	 		
					}
				
					
				
				}
					
				printf(" %d",count);
			   	
		 }
		
	
			   
			
			   

		
			
	
	

