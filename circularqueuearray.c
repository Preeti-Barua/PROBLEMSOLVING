#include<stdio.h>
#include<conio.h>
#define N 5 ;
int queue(N);
int front =-1;
int rear=-1;
void enqueue(int x)
{
	if(front ==-1&& rear==-1)
	{
		front=rear=0;
		queue[rear]=x;
	}
	else if((rear+1)%N==front)
	{
		printf("queue is full");
		
	}
	else
	{
		rear=(rear+1)%N;
		queue[rear]=x;
	}
}
void dequeue()
{
		if(front ==-1&& rear==-1)
		{
			printf("queue is empty");
		}
		else if(front==rear)
		{
			front=rear-1;
			
		}
		else
		{
			printf("%d",queue[front]);
			front=(front+1)%N;
		}
}
int main()
{
	
}
