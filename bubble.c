#include<stdio.h>
void main()
{  
int n;
	printf("Enter size of your elements:-\n");
	scanf("%d",&n);
	 
	int a[n],i,j,flag;
	printf("Enter them:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n-1;i++)
	{
		flag=1;
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=0;
			}
			if(flag==1)
			{
				break;
			}
		}
	}
	
}
