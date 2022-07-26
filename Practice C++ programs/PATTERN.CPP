// Program to print asterisk (*) pattern.
#include<iostream>
using namespace std;
int main(){
  for (int i=1;i<5;i++){
    cout<<endl;
    for (int j=1;j<=i;j++)
      cout<<"*";
  }
  return 0;
}
