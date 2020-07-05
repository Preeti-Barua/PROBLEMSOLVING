/*There are 7 floors in BH3 and only 2 lifts. Initially Lift A is at the ground floor and Lift B at the top floor. Whenever someone calls the lift from N th floor, the lift closest to that floor comes to pick him up. If both the lifts are at equidistant from the N th floor, them the lift from the lower floor comes up.

INPUT

First line contains a integer T denoting the number of test cases.

Next T lines contains a single integer N denoting the floor from which lift is called.

OUTPUT

Output T lines containing one character "A" if the first lift goes to N th floor or "B" for the second lift.

CONTRAINTS

0 <= N <= 7

1 <= T <= 100000

 

SAMPLE INPUT 
2
3
5
SAMPLE OUTPUT 
A
A */#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
					int A,B,mid,T,f;
					cout<<"T:";
					cin>>T;
					
					while(T--)
					{
					
				
					//cout<<"f:";
					 A=0;B=7;
					mid=(A+B)/2;
					cin>>f;
				    
					
					if(f<=mid)
					{
						cout<<"A\n";
						A=f;
						
					}
					 if(f>=mid)
					{
						cout<<"B\n";
						B=f;
					}
					
				}
					

}
