/* Given a singly linked list and a number K, you are required to complete the function modularNode() which returns the modular node of the linked list.
A modular node is the last node of the linked list whose Index is divisible by the number K, i.e. i%k==0.

Input:
First line of input contains number of testcases T. For each testcase, first line of input contains length of Linked list N. Next line contains elements of the linked list and last line contains K.

Output:
For each test case the function must return the modular Node data, if no such node is possible then return "-1".

User Task:
The task is to complete the function modularNode() which should return the data of the modular node if exists else return -1.

Constraints:
1 <= T <= 100
1 <= N <= 500

Example:
Input:
2
7
1 2 3 4 5 6 7
3
5
19 28 37 46 55
2

Output:
6
46 */
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	
	int data;
	struct node *link;
};
int main()
{



	int i,a,n,k,ans;
	struct node *temp,*head,*q,*mode;
	printf("enter the range::");
	scanf("%d",&n);
	printf("enter first element:");
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&a);
	newnode->data=a;
	newnode->link=NULL;
	head=newnode;
	
	for(i=1;i<n;i++)
	{
		printf("enter the next node::");
		q=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&a);
		q->data=a;
		q->link=NULL;
		newnode->link=q;
		newnode=newnode->link;
		
	}
	//displaying  elements..
	
	temp=head;
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->link;
	}
	printf("\n");
	printf("enter the k:");
	scanf("%d",&k);
	i=1;
	ans=0;
	temp=head;
	while(temp!=NULL)
	{
		if(i%k==0)
		{
			ans=temp->data;	
			
		}
		temp=temp->link;
		i++;
	}
	
	if(mode==NULL)
	{
		printf("-1");
	}
	else
	{
		printf("The element is: %d",ans);
	}
}

	
	
	
	
	
