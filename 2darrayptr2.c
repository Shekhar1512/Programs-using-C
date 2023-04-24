#include<stdio.h>
void main()
{
	int a[]={1,2,3,4,5,6,7,8,9};
	int * ptr=a;
	printf("%p",*ptr);
	printf("   %p",ptr);

}
