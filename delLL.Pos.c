//Delete at specific pos Cir.LL
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
	int k;
	printf("\nEnter the pos. for deletion:-  ");
	scanf("%d",&k);
    while(k>i)
	{
		prev=temp;
    	temp=temp->next;
    	i++;
	}
	
	prev->next=temp->next;
	prev=0;   //set the prev null before free it otherwise your node will delete 
	free(prev);
	
	
	
	
	
	temp=tail->next;
	
    printf("\nEntered elements are:-  ");
    while(temp!=tail)     //while(temp!=tail->next)
    {
    	printf(" %d ",temp->data);
    	temp=temp->next;
	}
    printf(" %d ",temp->data);
     	
}
