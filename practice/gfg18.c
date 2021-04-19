/* Given a singly linked list of N nodes. The task is to find the middle of the linked list. For example, if given linked list is 1->2->3->4->5 then the output should be 3.
If there are even nodes, then there would be two middle nodes, we need to print the second middle element. For example, if given linked list is 1->2->3->4->5->6 then the output should be 4.

Input:
The first line of input contains the number of test cases T. For each test case, the first line of input contains the length of the linked list and the next line contains data of nodes of the linked list.

Output:
For each test case, there will be a single line of output containing data of the middle element of the linked list.

User Task:
The task is to complete the function getMiddle() which takes a head reference as the only argument and should return the data at the middle node of the linked list.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= T <= 100
1 <= N <= 100

Example:
Input:
2
5
1 2 3 4 5
6
2 4 6 7 5 1

Output:
3
7  */
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	
	int data;
	struct node *link;
}node;
int main()
{ 	
	node *newnode,*q,*temp,*head,*mide,*mido;
	int i,N,a,P,T;
//	printf("T(TESTCASES):");
	scanf("%d",&T);
	
	while(T>0)
	{
//	printf("----------------------------performing Testcase ---------------------------\n\n");
//	printf("N(NUMBER OF ELEMENTS):");       //size of LL
	scanf("%d",&N);
//	printf("Elements(ENTER ELEMENTS):");     
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
	printf("\n");
	//printing middle element!
	

	       	temp=head;
	       	int k=1;
		 while(k<N/2)
		 {
		 	temp=temp->link;            //incrementiong temp.
		 	
		 	k++;
		}
		temp=temp->link;                    //incrementing temp
		mide=temp->data;
		printf("%d\n\n",mide);
		T--;		
	
}
}

	
