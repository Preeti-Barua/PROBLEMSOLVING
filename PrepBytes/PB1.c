#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
    
      int T,n,i;
      int sum=0;
      scanf("%d",&T);
      while(T){
        
        scanf("%d",&n);
          
          
          for(i=1;i<n;i++)
          {
            if(n%i==0){
              sum=sum+i;
              
              
            }
          }
          if(sum==n)
          {
            printf("true\n");
          }
           else{
             printf("false\n");
           }
        
        T--;
      }
  
  
  return 0;
}
