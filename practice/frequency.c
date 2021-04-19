#include<stdio.h>
#include<conio.h>

int main()
{
		int s[]={8,8,8,3,3,8,3,2,1,6,};
	    
		int  i,j;
		
 	//Performing bubble sort
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<9;j++)
		{
			if(s[i]>s[j])
			{
				int temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}

		//main logic
    for(i=0;i<=9;i++)                   
    {                        
        int count=1;        
        
        for(j=i+1;j<=9;j++)
        	if(s[i]==s[j])       
        	{
					
        		count++;              
        		i++;                  
			}
				printf("%d comes %d times\n",s[i],count);        
				
		}
}


	
          
	

