#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
	struct node*prev;
}*head=0,*tail,*newnode,*nextnode;


void main()
{
	int i=1,c;
	while(c)
	{
	
	printf("Enter %d data:-\n",i++);
	newnode=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&newnode->data);
	newnode->next=0;
	newnode->prev=0;
	
	if(head==0)
	{
		head=tail=newnode;
	}
	else
	{
		tail->next=newnode;
		newnode->prev=tail;;
		tail=newnode; 
	}
	printf("Press 0 for exit. \t press 1 for continue.\n");
	scanf("%d",&c);
    }
    
    newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=0;
	printf("\nEnter data for last node:  ");
	scanf("%d",&newnode->data);
	
	tail->next=newnode;
	newnode->prev=tail;
    tail=newnode;
    
    while(tail!=0)
    {
	  printf(" %d ",tail->data); 
	  tail=tail->prev;
    }
printf("  %d ",tail->data); 
	      
    
    
}
