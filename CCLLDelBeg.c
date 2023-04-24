//Delete at beg
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
}*temp,*tail,*newnode;

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
	printf("\nEnter choice:-  ");
	scanf("%d",&c);
	}
    temp=tail->next;
    
	tail->next=temp->next;
	free(temp);
	
	
	
	
	
	
	temp=tail->next;
	
    printf("\nEntered elements are:-  ");
    while(temp!=tail)
    {
    	printf(" %d ",temp->data);
    	temp=temp->next;
	}
    printf(" %d ",temp->data);
     	
}
