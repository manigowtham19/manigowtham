#include<stdio.h>
#include<string.h>
void main()
{
	char a[50],b[50],i,j;
	scanf("%s",&a);
	scanf("%s",&b);
	for(i=0;a[i]!='\0';++i)
	{
		for(i=0;b[j]!='\0';++j,++i)
		{
			a[i]=b[j];
		}
		a[i]='\0';
	}
	printf("%s",a);
  getch();
}
