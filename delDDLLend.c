//Delete at end
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
}*temp,*tail,*newnode,*prev;

void main()
{
	int c=1,i=1;
	while(c)
	{
	newnode=(struct node*)malloc(sizeof(struct node*));
    printf("\nEnter data :-  ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(tail==0)
    {
    	tail = newnode;
    	tail->next=newnode;
	}
	else
	{
		newnode->next=tail->next;
		tail->next=newnode;
		tail=newnode;
	}
	printf("\nChoice:-  ");
	scanf("%d",&c);
	}
    
	temp=tail->next;
    while(temp!=tail)
	{
    	prev=temp;
    	temp=temp->next;
	}
	
	prev->next=tail->next;
	tail=prev;
	
	
	
	
	
	temp=tail->next;
	
    printf("\nEntered elements are:-  ");
    while(temp!=tail)     //while(temp!=tail->next)
    {
    	printf(" %d ",temp->data);
    	temp=temp->next;
	}
    printf(" %d ",temp->data);
     	
}
