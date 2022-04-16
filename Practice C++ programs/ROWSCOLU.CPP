//write a progrom to sum row and columb elements of martix.
//Downloaded From www.turboc8.com coded by Yogendra Singh.

#include<iostream.h>
#include<conio.h>
int main()
{

clrscr();
cout<<"                         www.turboc8.com"<<endl;
int a[50][50],b,c,i,j,m,n;
cout<<"Enter the order of matrix ";
cin>>n;
cout<<"*"<<endl;
cin>>m;
cout<<"\nEnter the elements of matrix "<<endl;
for (i=1;i<=n;i++)
{
for (j=1;j<=m;j++)
cin>>a[i][j];
}
cout<<"\nElements of matrix are "<<endl;
for (i=1;i<=n;i++)
{
cout<<endl;
for (j=1;j<=m;j++)
cout<<a[i][j]<<" ";
}
for (i=1;i<=n;i++)
{
b=0;
for (j=1;j<=m;j++)
{
b=b+a[i][j];
}
cout<<"\nsum of "<<i<<"  row = "<<b;
}
for (j=1;j<=n;j++)
{
c=0;
for (i=1;i<=m;i++)
{
c=c+a[i][j];
}
cout<<"\nsum of "<<j<<"  columb = "<<c;
}
getch();
return 0;
}
