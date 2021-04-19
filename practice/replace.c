/*   The function replaceElements is modifying the input list in such a way – if the sum of all the elements of the input list is odd, then all the elements of the input list are supposed to be replaced by 1s, and in case if the sum of all the elements of the input list  is even, then the elements should be replaced by 0s.

For example, given the input list [1,2,3,4,5], the function will modify the input list like [1, 1, 1, 1, 1] */
#include<stdio.h>

int main()
{
	   int arr[100];
	   int A[100];
	   int n,i;
	   scanf("%d",&n);
	   for(i=0;i<n;i++)
	   {
	   	scanf("%d",&arr[i]);
	   }
	   replace(n,arr);
	
}

	   
	   
	   int replace(int n,int *arr)
	   {
	   	int A[100];
	   int i,sum=0;
	     for(i=0;i<n;i++)
	   {
	        sum=sum+arr[i];
	   }
	   if(sum%2==0)
	   {
	   		i=0;
	   	    while(i<n)
	   	    {
	   	    
					
	   	    	A[i]=0;
	   	    	i++;
	   	    
	   	
		   }
		    for(i=0;i<n;i++)
	   {
	   	printf("%d ",A[i]);
	   }
	}
		 
	   	    
			   
	   
	   else{
	   	int i=0;
	   	while(i<n)
	   	{
	   		A[i]=1;
	   		i++;
		   }
		for(i=0;i<n;i++)
	   {
	   	printf("%d ",A[i]);
	   }
		  
		}
	   }
	  
	   
	   


