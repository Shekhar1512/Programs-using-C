#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
}*head=0,*temp,*newnode,*nextnode;


int  main()
{
	int i=1;int c=1,k;
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
    
    printf("Enter the position you wanna delete:- ");
    scanf(" %d ",&k);
    temp=head;
    i=1;
    while(i<k)
    {
    	temp=temp->next;
    	i++;
	}
temp->next=nextnode->next;
free(nextnode);    
    
    
    
    printf("\nYour entered Elements are:-\n\n");
    temp=head;
    while(temp!=0)
    {
	  printf("  %d ",temp->data); 
	  temp=temp->next;
	 
    }
    printf("  %d ",temp->data);
	return 0; 
}
    
    
