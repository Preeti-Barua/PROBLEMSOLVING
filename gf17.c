/*  Given a Singly Linked List of size N, your task is to complete the function deleteAlt(), which starting from the second node delete all alternate nodes of the list.

Input:
The function takes a single argument as input, the reference pointer to the head of the linked list. There will be T test cases and for each test case the function will be called separately. 

Output:
For each test the output will be space separated values of the linked list.

Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
2
6
1 2 3 4 5 6
4
99 59 42 20

Output:
1 3 5
99 42 */

#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	
	int data;
	struct node *link;
}node;
int main()
{ 	
	node *newnode,*q,*temp,*head;
	int i,N,a,P,T;
	printf("T(TESTCASES):");
	scanf("%d",&T);
	
	while(T>0)
	{
	printf("----------------------------performing Testcase ---------------------------\n\n");
	printf("N(NUMBER OF ELEMENTS):");       //size of LL
	scanf("%d",&N);
	printf("Elements(ENTER ELEMENTS):");     
	newnode=(node *)malloc(sizeof(node));
	scanf("%d",&a);
	newnode->data=a;
	newnode->link=NULL;
	head=newnode;
	for(i=1;i<N;i++)
	{
		q=(node *)malloc(sizeof(node));
		scanf("%d",&a);
		q->data=a;
		q->link=NULL;
		newnode->link=q;
		newnode=newnode->link;
	}
	
                  //printinf the alternating elements!
                  printf("PRINTING ALTERNATING-----\n");
                  temp=head;
                  while(temp!=NULL)
                  {
                  	
                  	
                  	printf("%d  ",temp->data);
                  	temp=temp->link->link;
                  	
                  }
                  printf("\n");
                  T--;
}
	printf("----------------------------performing Testcase ---------------------------");
	
}


