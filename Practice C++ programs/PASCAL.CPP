//write a progrom to print pascal triangle.
//Downloaded From www.turboc8.com coded by Yogendra Singh.

#include<conio.h>
#include<iostream.h>
int main()
{
clrscr();
int n,i,j,c,k,place;
cout<<"                         www.turboc8.com"<<endl;

cout<<"Enter the no of rows "<<endl;
cin>>n;
cout<<" \n\nPASCAL TRIANGLE"<<endl;
cout<<"\n\n";
place=n;
for(i=0;i<n;i++)
{
c=1;
for(k=place;k>=0;k--)
cout<<" ";

place--;
for(j=0;j<=i;j++)
{
cout<<c<<" ";
c=(c*(i-j)/(j+1));
}
cout<<"\n";
}
getch();
return 0;
}
