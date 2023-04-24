#include<stdio.h>
struct node{
	
	int data; 
	struct node * left,*right;
};


struct node* create()
{
	int x;
 	struct node * newnode = (struct node * )malloc(sizeof(struct node*));
    printf("\nEnter data for node:-  ");
    scanf("%d",&x);
    if(x == 0)
    {
    	return newnode; 
	}
	else
	{
		newnode->data;
	}
}

void main()
{
	struct node * root;
	root = create();
}
