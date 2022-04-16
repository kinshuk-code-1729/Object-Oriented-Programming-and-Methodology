//write a progrom to print fibonacci series.
//Downloaded From www.turboc8.com coded by Yogendra Singh.

#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
cout<<"                         www.turboc8.com"<<endl;
int a=0,b=1,c=0;
cout<<a<<b;
for (int i=0;i<=5;i++)
{
a=b;
b=c;
c=a+b;
cout<<c;
}
getch();
return 0;
}
