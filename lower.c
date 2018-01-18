#include<stdio.h>
#include<conio.h>
void main()
{
char c;
int  lowercasevowel,i  uppercasevowel;
printf("it is an alphabet");
scanf("%c",&c);
 lowercasevowel(c=='a'||c=='e'||c='i'||c=='o'||c=='u');
 uppercasevowel(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(lowercasevowel||uppercasevowel)
{
printf("%c is vowel of"c");
}
else
{
printf("it is a constant");
}
}
