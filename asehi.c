#include<stdio.h>

int gcd(int ,int);
int gcd(int m,int n)
{
	if(n==0 && m==0)
	return (1/0);
	
	else if(n==0)
	return m;
	
	else if(m==0)
	return n;
	
	else
	return gcd(n%m,m);
	
}

void main()
{
	int m=0,n=0;
	int x =gcd(n,m);
	printf("%d",x);
	
}
