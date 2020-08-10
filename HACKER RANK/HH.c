
#include<bits/stdc++.h>



bool subset(int arr1[],int arr2[],int m, int n)

{
	
	
	           int i=0, j=0;
	    
	            for(i=0;i<m;i++)
	            {
	            	for(j=0;j<n;j++)
	            	{
	            		if(arr2[j]==arr1[i])
	            		{
	            			break;
						}
						if(j==m)
						{
							return 0;
						}
					}
					return 1;
				}
			}
				int main()
				{
					
					
					  int arr1[] = {11, 1, 13, 21, 3, 7}; 
                       int arr2[] = {11, 3, 7, 1}; 
				   int m = sizeof(arr1)/sizeof(arr1[0]); 
                    int n = sizeof(arr2)/sizeof(arr2[0]);
	                if(subset(arr1,arr2,m,n))
	                {
	                	printf("yes");
					}
					else{
						printf("no");
					}
				
				}
			
	            

