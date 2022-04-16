//write a progrom to print sum of elements of diagonal of matrix
//Downloaded From www.turboc8.com coded by Yogendra Singh.
#include<iostream.h>
#include<conio.h>
int main()
{

clrscr();
cout<<"                         www.turboc8.com"<<endl;
int a[50][50],b=0,i,j,m,n;
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
cout<<"\nSum of diagonal element is "<<endl;
for (i=1;i<=n;i++)
{
for (j=1;j<=m;j++)
{
if (i==j)
b=b+a[i][j];
}
}
cout<<b;
getch();
return 0;
}



