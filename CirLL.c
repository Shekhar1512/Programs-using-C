#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	
};

void main()
{
	struct node *head=0,*temp,*newnode;
	int c=1,i=1;
	while(c)
	{
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter data:-  ");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		head=temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
		temp->next=head;
	}
	printf("\nEnter choice:-  ");
	scanf("%d",&c);
    
	}
	
	
	temp=head;
	printf("\nEnterd elements are:-  ");
     
	

	
	while(temp!=0)
	{
		printf(" %d ",temp->data);
		temp=temp->next;
	}
	
	
  
}
