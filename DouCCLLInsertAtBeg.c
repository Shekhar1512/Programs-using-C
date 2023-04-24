#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int data;
	struct node * next;
	struct node * prev;
	
}*head,*tail,*newnode,*temp;

void main()
{
	int c=1;
	while(c)
	{
	
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter data:-  ");
	scanf("%d",&newnode->data);
	newnode->next=0;
	newnode->prev=0;
	if(head==0)
	{
		head = temp = newnode;
		temp->next=newnode;
		temp->prev=newnode;
	}
	else
	{
	    newnode->next=head;
		temp->next=newnode;
		newnode->prev=temp;
		head->prev=newnode;
		temp=newnode;	
	}
	printf("Enter choice  ");
	scanf("%d",&c);
	
    }

	newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data for beg.");
    scanf("%d",&newnode->data);
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
    
    
    
    
    
    
    
    
    
    temp=head;
    printf("\nEntered elements are:-  ");
    while(temp->next!=head)
    {
    
    	printf("  %d  ",temp->data);
    	temp=temp->next;
	}
    printf("  %d  ",temp->data);
     
}
