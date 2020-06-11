/* Given a single linked list of size M, your task is to complete the function sumOfLastN_Nodes(), which should return the sum of last N nodes of the linked list.

Input:
The function takes two arguments as input, the reference pointer to the head of the linked list and the an integer N.
There will be T test cases and for each test case the function will be called seperately.

Output:
For each test case output the sum of last N nodes of the linked list.

Constraints:
1<=T<=100
1<=N<=M<=1000

Example:
Input:
2
6 3
5 9 6 3 4 10
2 2
1 2

Output:
17
3 */
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	
	int data;
	struct node *link;
}node;
int main()
{ 	
	node *newnode,*q,*temp,*head,*PO;
	int i,N,a,P,T;
	printf("T(TESTCASES):");
	scanf("%d",&T);
	
	while(T--)
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
	

	//sum of last Nth nodes
	printf("P(Nth position):");                
	temp=head;
	int sum=0;
	scanf("%d",&P);
	
	
		i=1;
		while(i<P)
		{
			temp=temp->link;
			i+=1;
			
		}
		
		PO=temp->link;
	                   while(PO!=NULL)
		{
		  	sum=sum+PO->data;
			 PO=PO->link;		
			
		}
		
		printf("sum: %d\n\n",sum);
                     }
	printf("----------------------------performing Testcase ---------------------------");
	
	}
		
	
	
	

