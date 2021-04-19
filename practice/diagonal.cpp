#include<iostream>
using namespace std;
int main()
{
	int arr[10][10];
	int sum=0,sum1=0;
	int i,j;
	cout<<"enter the elements of the matrix::";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
                    for(i=0;i<3;i++)
                    {
                    	for(j=0;j<3;j++)
		{
		

                    
                    	if(i==j)
                    	{
                    	           sum=sum+arr[i][j];
		}
		if((i+j)==2)
		{
		 	sum1=sum+arr[i][j];
		}
	}
}
	cout<<"the right diagonal is::"<<sum<<endl;
	cout<<"the left diagonal is::"<<sum1<<endl;
	cout<<" diagonal diffrence::"<<sum-sum1;
	return 0;
}
