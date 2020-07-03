/*You have been given 3 integers - l, r and k. Find how many numbers between l and r (both inclusive) are divisible by k. You do not need to print these numbers, you just have to find their count.

Input Format
The first and only line of input contains 3 space separated integers l, r and k.

Output Format
Print the required answer on a single line.

Constraints


SAMPLE INPUT 
1 10 1
SAMPLE OUTPUT 
10 */
#include<conio.h>
#include<iostream>
using namespace std;
int main()

{
	               int l,r,k,i;
	               int counter=0;
	             //  cout<<"enter l:";
	               cin>>l;
	              // cout<<"enter r:";
	               cin>>r;
	              // cout<<"enter k:";
	               cin>>k;
	               for( i=l;i<=r;i++)
	               {
	               	          if(i%k==0)
	               	          {
	               	          	counter+=1;
							   }
				   }
				   cout<<counter;
	               
}
