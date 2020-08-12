#include<stdio.h>
int main()
{
              int p,n,lr,rl,tot;
              scanf("%d",&n);
              scanf("%d",&p);
              
              
             tot= n/2;     //total number of pages
            lr= p/2;
            rl= n/2- p/2;
            
            if(lr<rl)
            {
            	printf("%d",lr);
			}
			else{
				printf("%d",rl);
			}
             

}
