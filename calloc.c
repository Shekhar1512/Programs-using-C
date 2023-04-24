#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i;
	printf("enter no of blocks:-\n");
	scanf("%d",&n);
	float *ptr=(float *)calloc(n,sizeof(float));
	printf(" enter blocks:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("Valuers are:-\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",*(ptr+i));
	}
}
