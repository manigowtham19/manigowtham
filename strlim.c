#include<stdio.h>
void main()
{
char str[50];
int a,b;
printf("Enter any string:");
gets(str);
printf("Enter the limit:");
scanf("%d",&b);
for(a=0;a<b;a++)
{
printf("%c",str[a]);
}
}
