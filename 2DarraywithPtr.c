#include<stdio.h>
void main()
{
	int i;
	int a[3][3]={9,6,3,2,5,8,9};
	int n = 6;
	int * ptr=a[0];
	printf("%d\n",**(a+1));
	for(i=0;i<n;i++)
	{
		printf(" %d ",*(ptr+i));
		if(i==2)
		{
			printf("\n");
		}
	}
	
}
