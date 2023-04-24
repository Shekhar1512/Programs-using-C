#include<stdio.h>
void main()
{
	int a[] = {2,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9};
	int size = sizeof(a)/sizeof(a[0]);
   	int i,j,count=1,max=0;

	for(i=0;i<size;i++)
	{
		if(a[i]>a[max])
		{
			max=i;
		}
	}
    max=a[max];
    int b[max]; 	
	for(i=0;i<=max;i++)
	{
		b[i]=0;
	}
	for(i=0;i<size;i++)
	{
		b[a[i]]++;
	}
	int c[max];
	c[0]=b[0];
	
	for(j=1;j<=max;j++)
	{
		c[j]=b[j]+c[j-1];
	}
	
	
	for(i=0;i<=max;i++)
	{
		printf("  %d  ",c[i]);
	}

   
}
