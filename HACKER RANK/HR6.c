#include<stdio.h>
void main()
{
	
	
	
	    
	       int a[5];
	       int i,min,max;
	       int large=0,small=0;
	       int sum=0;
	       
	       for(i=0;i<5;i++)
	       {   
	            scanf("%d", &a[i]);
	       	
		   }
		   min= a[0];
		   for(i=0;i<5;i++)
		   {
		   	      if(a[i]<min)
					 {
					 	min=a[i];
					  } 
		   }
		  // printf("  the min :%d",min);
		   
		   
		   	max= a[0];
		   for(i=0;i<5;i++)
		   {
		   	      if(a[i]>max)
					 {
					 	max=a[i];
					  } 
		   }
		 //  printf(" %d",max);
		   
		   
		   for(i=0;i<5;i++)
		   {
		   	sum=sum+a[i];
		   	
		   }
		 
		    large=sum-min;
		    
		    
		    small=sum-max;
		    
		    
		    printf("%d\n",large);
		    printf("%d",small);
		    
		   
		   
	       
}
