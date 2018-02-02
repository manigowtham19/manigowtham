#include <stdio.h>

int main()
{
   int a,b,f;
   printf("enter any number");
   scanf("%d %d",&a,&b);
   f=a-b;
   printf("%d",f);
   if(f%2==0)
   { 
       printf("\n The number is even");
   }
   else
   {
       printf("\n The number is odd");
   }
    return 0;
}
