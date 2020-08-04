#include<stdio.h>
int main()
{
	
	        
	        int a[10];
	       int n ,k,i,b;
	       int sum=0,bill, actual=0;
	       
	       scanf("%d  %d", &n, &k );
	      
	       for(i=0;i<n;i++)
	       {
	       	     scanf("%d",&a[i]);
		   }
		 
		   
		   for(i=0;i<n;i++)
		   {
		   	    sum=sum+a[i];
		   	}
		    	sum=sum-a[k];
		    

		       scanf("%d",  &b);
			   	
		    	//spliting in half, the cost of per person
		    	bill= sum/2;
		    
		    	//actual bill= Brain charged her - her portion
		    	actual=b-bill;
		    	printf("%d",actual);  
	}

		   
		   
		   
		   
		
	
		   
		   
	       

