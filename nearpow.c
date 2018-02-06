#include<stdio.h>
void main()
{
	int n,i,c=0,n=1,p=2;
	scanf("%d",&n);
	while(n!=1)
	{
		n=n/2;
	c++;
	}
	for(i=0;i<c+1;i++)
	{
		n=n*p;
	}
	printf("%d",n);
}
