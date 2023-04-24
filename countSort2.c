#include<stdio.h>
void main()
{
		int a[] = {9,8,7,6,5,4,3,2,1,1,2,3,4,5,6,7,8,9};
		int size = sizeof(a)/sizeof(a[0]);
		int i,max=0;
		for(i=1;i<size;i++)
		{
			if(a[max]<a[i])
			{
				max=i;
			}
		}
		int n=a[max]+1;
		int count[a[max]+1];
		for(i=0;i<n;i++)
		{
			count[i] = 0; 
		}
		
		for(i=0;i<size;i++)
		{
			count[a[i]]++; 
		}
		
		
		for(i=1;i<n;i++)
		{
			count[i] = count[i]+count[i-1];
		}
		
		
		
		int new[size];
		for(i=size-1;i>=0;i--)
		{
			new[--count[a[i]]] = a[i];
		}
		
		
		for(i=0;i<size;i++)
		{
			printf("  %d  ",new[i]) ;
		}
		
		
		
		
}
