#include<stdio.h>
void quicksort(int *,int ,int);
int partition(int *,int lb,int ub);

int partition(int a[],int lb,int ub)
{
	int start=0;
	int end=ub;
	int pivot =a[lb];
	while(start<end)
	{
	

	while(a[start]<=pivot)
	{
		start++; 
	}
	while(a[end]>pivot)
	{
		end--;
	}


if(start<end)
    {
		int temp = a[start];
	a[start]=a[end];
	a[end]=temp;
	
    }
}
    int temp= a[end];
    a[end]=a[lb];
    a[lb]=temp;
    
	return end;
}



void quicksort(int a[],int lb ,int ub)
{
    if(lb<ub)
    {
    	int loc=partition(a,lb,ub);
    	quicksort(a,lb,loc-1);
    	quicksort(a,loc+1,ub);
	}       	
	
	
}


void main()
{
	int i;
	int a[]={32,68,12,36,65,900,251};
	int n = sizeof(a)/sizeof(a[0]);
	int lb=0,ub=n-1;
	quicksort(a,lb,ub);
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	
}
