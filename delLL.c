//delete from position
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
}*head=0,*temp,*newnode,*previous;


void main()
{
	int i=1;int c=1;int k;
	while(c)
	{
	
	printf("Enter %d data:-\n",i++);
	newnode=(struct node*)malloc(sizeof(struct node));
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
	
	printf("0 or 1\n");
	scanf("%d",&c);
    }
    printf("Enter the positiom you want to delete:- ");
    scanf("%d",&k);
    i=1;
    temp=head;
    while(i<k)
    {
    	previous=temp;
    	temp=temp->next;
    	i++;
	}
	previous->next=temp->next;
	free(temp);

	
    
    
    
    printf("\nYour entered Elements are:-\n\n");
    temp=head;
    i=1;
    while(temp!=0)
    {
	  printf("  %d ",temp->data); 
	  temp=temp->next;
	  i++;
    }
    printf("  %d ",temp->data); 
}
    
    
