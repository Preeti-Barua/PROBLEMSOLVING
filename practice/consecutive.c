#include<stdio.h>
#include<conio.h>
int main()
{
	
	                int arr[]= {7,5,3,2,4,1,6}; 
	                int n = sizeof(arr)/sizeof(arr[0]);
	      
	                
	                int i,j;
	                
	                for(i=0;i<n-1;i++)
	                {
	                	for(j=i+1;j<n;j++)
	                	{
	                		
	                		   if(arr[i]>arr[j])
	                		   {
	                		   	   int temp= arr[i];
	                		   	   arr[i]=arr[j];
	                		   	   arr[j]=temp;
							   }
						}
					}
				
					
				
					for(i=0,j=i+1;i<j;i++,j++)
					{
						if(arr[j]-arr[i]==1)
						{
							printf("1");
							break;
						}
						else{
							  printf("0");
							  break;
						}
					}
					
					
					
				
	                
	            
}
