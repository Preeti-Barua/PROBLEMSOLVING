#include<stdio.h>
#include<conio.h>

binarysearchh(int A[],int n,int x)
{
	           int low=0;
	           int high=n-1;
	           while (low<=high)
	           {
	           	   int mid= (low+high)/2;
	           	   
	           	   
	           	   if(A[mid]==x)
	           	   {
	           	        	return mid;
					}
				   else if(x < A[mid])
				   {
				   	       high=mid-1;
				   }
				   else
				   {
				   	    low=mid+1;
				    }
				      
			   }
			 
	     return -1;      
}
int  main()
{
	
	           	int A[]={2,6,14,21,36,47,63,81};
	           	int n= sizeof(A)/sizeof(A[0]);
	           	int x;
	           	scanf("%d",&x);
	           	int q= binarysearchh(A,n,x);
	           	
	           	if(q!=-1)
	           	{
	           		printf("element found");
				}
	           	else
	           	{
	           		printf("element not found");
				 }
}
