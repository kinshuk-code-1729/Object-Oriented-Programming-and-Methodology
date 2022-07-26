// Program to print fibonacci series.
#include<iostream>
using namespace std;
int main(){
  int a=0,b=1,c=0;
  cout<<a<<b;
  for (int i=0;i<=5;i++){
    a=b;
    b=c;
    c=a+b;
    cout<<c;
  }
  return 0;
}
