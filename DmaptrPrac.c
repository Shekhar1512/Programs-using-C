#include<stdio.h>
void main()
{
	int n,i;
	char *ptr;
	printf("Enter any no:-\n");
	scanf("%d",&n);
	ptr = ( char *)malloc(n*sizeof(char));
    printf("enter them:-\n");
	
	if(ptr==0)
	{
		printf("yes");
	}
	
	else
	{
	
	
	for(i=0;i<n;i++)
	{
		
		scanf("%c",(ptr+i));
	}
	
	printf("Values are\n\n");
	for(i=0;i<n;i++)
	{
		printf(" %c ",*(ptr+i));
	}
	
}


