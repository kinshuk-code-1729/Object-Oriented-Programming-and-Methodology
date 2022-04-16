// Calculating cube using a function
#include<iostream>
using namespace std;
float cube(float a)
{ float n;
n=a*a*a;
return(n);
}
int main()
{ float x,y,cube(float);
cout<<"\nEnter any number to find its cube : ";
cin>>x;
y=cube(x);
cout<<"The cube of "<<x<<" is "<<y<<"\n";
return 0;
}
