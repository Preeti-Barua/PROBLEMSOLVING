#include<iostream>
#include<cmath>

#include<conio.h>
using namespace std;





void juggler(int n)
{
	    long long a=n;
	    
	   cout<<a <<" ";
	    
	    while(a != 1)
	    {
	    	long long b=0;
	    	
	    	
	    	if(a%2 == 0)
	    	
	    		b=floor(sqrt(a));
			
			else
			
			
			  b=floor(sqrt(a)*sqrt(a)*sqrt(a));
				
				
				cout<<b<<" ";
				
				a=b;
			
		}
	    
}


int main()
{
	    int T,n;
	    cin>>T;
	    while(T--)
		{
			  int n;
			  cin>>n;
			   juggler(n);	
			  cout<<"\n";
			
	    }
	    
	    return 0;
	}
	    
