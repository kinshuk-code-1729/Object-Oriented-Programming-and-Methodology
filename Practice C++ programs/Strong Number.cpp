//Program to Check whether a number is a Strong Number.
#include<iostream>
using namespace std;
int main(){
  int n,i,f,r,sum=0,temp;
  cout<<"Enter a number : ";
  cin>>n;
  temp=n;
  while(n){
      i=1,f=1;
      r=n%10;
      while(i<=r){
         f = f*i;
        i++;
      }
      sum += f;
      n /= 10;
  }
  if(sum==temp)
      cout<<" is a strong number";
  else
      cout<<" is not a strong number";
  return 0;
}
