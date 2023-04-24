#include<stdio.h>
int  main()
{
	int i,j,flag;
	int  a[] = {9,8,7,6,5};
	int n=5;
	for(i=0;i<n-1;i++)
	{
		flag = 1;
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=0;
			}
		}
		if(flag==1)
		{
			break;
		}
	}
	
	for(i=0;i<n;i++){
	
	printf(" %d ",a[i]);
}

}
