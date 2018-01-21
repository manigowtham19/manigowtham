#include <stdio.h>
int main(void)
{
int i,j,tmp;
scanf("%d%d",&i,&j);
tmp=i;	
i=j;
j=tmp;
printf("%d\t%d",i,j);
return 0;
}
