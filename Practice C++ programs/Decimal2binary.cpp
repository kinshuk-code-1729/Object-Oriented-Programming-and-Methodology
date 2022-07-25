// Progrom to convert a decimal number to its equivalent binary value.
#include<iostream>
using namespace std;
int main(){
    int n,p,c,k,count=0;
    cout<<"Enter a decimal number : ";
    cin>>n;
    p=n;
while(p) // this loop is for finding number of digits only 
  {
      p=p/10;
      count++;
  }
    
  cout<<"Equivalent Binary number is : ";
  if (count=1)
   count=2;
   c=count*count*count; // count is for total number of digits
   for (c; c >= 0; c--){
    k = n >> c;
    if (k & 1)
      cout<<"1";
    else
      cout<<"0";
   }
 
   cout<<"\n";
   return 0;
}
