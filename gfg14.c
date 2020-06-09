#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * link;
};
struct node *head,*temp,*newnode=NULL;

int create(int x)
{
	
           newnode=(struct node*) malloc(sizeof(struct node));
           newnode->data=x;
           newnode->link=NULL;
           
           if(head==NULL)
           {
           	head=newnode;
           	temp=newnode;
             }
             else
             {
	temp->link=newnode;
	temp=newnode;
	
             	
             }
             return x;
	        	
}

int display()
{
	 temp=head;
	if(head==NULL)
	{
		printf("the list is empty");
		return 0;
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d  ",temp->data);
			printf("\n");
			temp=temp->link;
		}
	}
}

int  length( )
{
		struct node * temp=head;
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
           //printf("the count is::%d",count);
	return count;
}


int main()
{ 	int count=0;
    

	create(4);
	create(5);
	create(6);
	create(7);
	create(8);
	create(9);

	
	
	display();
                }
		printf("%d\n",length());
		if(length()%2==0)
		{
			printf("even");
			
		}
		
		else
		{
		
			printf("odd");
		}
}
