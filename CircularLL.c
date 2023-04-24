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
		
	}
	temp->next=head;
	printf("\nEnter choice:-  ");
	scanf("%d",&c);
    
	}
	
	newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data for beg:-  ");
	scanf("%d",&newnode->data);
	
	newnode->next=head;
	head=newnode;
	temp->next=head;	
   
     
	

	temp=head;
	printf("\nEnreed elements are:-  ");
	while(temp->next!=head)
	{
		printf(" %d ",temp->data);
		temp=temp->next;
	}
		printf(" %d ",temp->data);
	
	
  
}
