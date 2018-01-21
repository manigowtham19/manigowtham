#include <stdio.h>
#include <ctype.h>
int main()
{
 char c;
  printf("Enter the character: ");
  scanf("%c",&c);
  if (isdigit(c) == 0)
  printf("%c is not numeric.",c);
  else
  printf("%c is numeric",c);
return 0;
}
