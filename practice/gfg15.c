/* Given a doubly linked list, rotate the linked list counter-clockwise by P nodes. Here P is a given positive integer and is smaller than the count of nodes(N) in a linked list.

Input:
The first line of input contains an integer T denoting the no of test cases. For each test case, the first line of input contains two integers N and P denoting the number of nodes in Linked List and the number of nodes to be rotated respectively.

Output:
For each test case, output the final linked list after the P rotations in it.

Constraints:
1 <= T <= 100
2 <= N <= 100
1 <= P <= N

Example:
Input:
1
6 2
1 2 3 4 5 6

Output:
3 4 5 6 1 2 */
#include<stdio.h>

#include<stdlib.h>
typedef struct node
{
	int data;
	struct node * link;
}node;





int main()
{ 	
    
      

	  int a,i,n,cnt,r;
	    node *p,*q,*head,*temp, *newhead;
	  printf("enter the number of nodes::");
	  scanf("%d",&n);
	  printf("enter all the nodes seperated by spaces::");
	  p= (node *)malloc(sizeof( node));
	  scanf("%d",&a);
	  p->data=a;
	  p->link=NULL;
	  head=p;
	  
	  for(i=0;i<n;i++)
	  {
	  	q=( node * )malloc(sizeof(node));
	  	scanf("%d",&a);
	  	q->data=a;
	  	q->link=NULL;
	  	p->link=q;
	  	p=p->link;
	  
	  
	  }
	  printf("Enter the rotation node::");
	  scanf("%d",&r);
	  
	  p=head;
	  while(p->data!=r)
	  {
	  	p=p->link;
	  }
	  temp=p->link;
	  newhead=temp;
	  p->link = NULL;  // make p as last node of new rotated linked list

	while(temp->link!=NULL) // go to the last node of original linked list
	{
		temp = temp->link;		
	}

	temp->link = head; // connect last node of original linked list to first node

	printf("\n Rotated List = ");
	p = newhead;
	while(p!=NULL)
	{
		printf("%d  ",p->data);
		p =p->link;
	}


	return 0;
}
	  
	 
	
	

                
