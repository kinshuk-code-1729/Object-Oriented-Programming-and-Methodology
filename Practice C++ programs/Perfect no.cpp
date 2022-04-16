//write a progrom to Check Perfect Number.
//Downloaded From www.turboc8.com coded by Yogendra Singh.

#include<iostream.h>
#include<conio.h>
int main()
{
  clrscr();
  cout<<"                         www.turboc8.com"<<endl;
  int n,i=1,sum=0;

  cout<<"Enter a number: ";
  cin>>n;

  while(i<n){
      if(n%i==0)
           sum=sum+i;
          i++;
  }
  if(sum==n)
      cout<<" is a perfect number";
  else
      cout<<" is not a perfect number";
   getch();
  return 0;
}
