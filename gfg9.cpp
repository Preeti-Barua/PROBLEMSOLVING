#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a[100];
	int flag=0,N,i;
	cout<<"enter limit::";
	cin>>N;
	cout<<"entering elements";
	for(i=0;i<N;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<N;i++)
	{
		if(a[i]==i+1)
		{
		
		flag=1;
		cout<<"the element is::"<<(i+1)<<"  ";
		}
		
	}

	if(flag==0)
	{
		cout<<"no element present!!";
	
	}
	

	
}

