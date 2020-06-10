/* Given a linked list of size N, your task is to complete the function isLengthEvenOrOdd() which contains head of the linked list and check whether the length of linked list is even or odd.

Input:
The input line contains T, denoting the number of testcases. Each testcase contains two lines. the first line contains N(size of the linked list). the second line contains N elements of the linked list separated by space.

Output:
For each testcase in new line, print "even"(without quotes) if the length is even else "odd"(without quotes) if the length is odd.

User Task:
Since this is a functional problem you don't have to worry about input, you just have to  complete the function isLengthEvenOrOdd().

Constraints:
1 <= T <= 100
1 <= N <= 103
1 <= A[i] <= 103

Example:
Input:
2
3
9 4 3
6
12 52 10 47 95 0

Output:
Odd
Even */
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node * link;

} node;



int main()
{ 
   int  N,A,T,i;
    node *q,*head,*temp,*newnode=NULL;
   printf("T:");
 
   
   scanf("%d",&T);
    while(T--)
   {
   printf("N:");
   scanf("%d",&N);
   printf("enter the nodes:");
   newnode=(struct  node *)malloc(sizeof(struct node));
   scanf("%d",&A);
    newnode ->data=A;
      newnode->link=NULL;
    head= newnode;
    for ( i=1;i<N;i++)
    {
    	q=( node *)malloc(sizeof( node));
    	scanf("%d",&A);
    	q->data=A;
    	q->link=NULL;

    	newnode->link=q;
    	newnode=newnode->link;
    	
    }
    //logic of counting nodes!!
    
    
    
		 temp=head;
		int count=0;
	if(head==NULL)
	{
		printf("the list is empty");
		
	}
	else
	{
		while(temp!=NULL)
		{
			count++;
			temp=temp->link;
		}
		
	}
         	 	 printf(" count::%d\n",count);
          		 printf("\n\n");

    
   
   	if(count%2==0)
	{
		printf("  even\n\n");
			
	}
		
	else
	{
		
		printf("odd\n\n");
	}	
}
		
}


