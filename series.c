#include<iostream.h>
#include<conio.h>
int main()
{
int a,n,d,i,x,y,s;
cout<<"Enter initial value for series";
cin>>a;
cout<<"Enter the difference";
cin>>d;
cout<<"Enter no.of times";
cin>>n;
x=a;
  y=n*d;
  s=n*(x+y)/2;
cout<<"sum of ap series %d"<<s;
return 0;
}
