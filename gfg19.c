#include<stdio.h>
#include<stdlib.h>
 struct node{
	int data;
	struct node *prev;
	struct node *next;
};
int main()
{
	int P,i,a,N;
	struct node *temp,*newnode,*newcell,*q,*head;
	printf("N=");
	scanf("%d",&N);
//	printf("p=");
//	scanf("%d",&P);
	printf("enter first node:");
	newnode=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&a);
	newnode->data=a;
	newnode->next=NULL;
	newnode->prev=NULL;
	
	head=newnode;
	
	
	for(i=1;i<N;i++)
	{
		printf("enter next node:: ");
		q=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&a);
		q->data=a;
		q->next=NULL;
		q->prev=newnode;
		newnode->next=q;
		newnode=newnode->next;
			
	}
	temp=head;
	
		while(temp!=NULL){
		
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
	
	//insertion of a node.
	printf("enter the element to insert:::");
	newnode=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&a);
	newnode->data=a;
	newnode->next=NULL;
	newnode->prev=NULL;
	
	temp=head;
	i=0;
	printf("enter the postion in where you want to  insert:");
	scanf("%d",&P);
	
	if(P==1)
	{
		head->prev=newnode;
		newnode->next=head;
		head=newnode;
	}
	else{
		while(i<P-1)
		{
		temp=temp->next;
		i++;
		}
	newnode->prev=temp;
	newnode->next=temp->next;
	temp->next=newnode;
	newnode->next->prev=newnode;
	}
	
	
	
	//for display!
	temp=head;
	while(temp!=NULL){
		
		printf("%d",temp->data);
		temp=temp->next;
	}
	

	
}
