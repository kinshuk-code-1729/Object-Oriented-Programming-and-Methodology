// Program to demonstrate function overloading
#include<iostream>
using namespace std;
int volume(int);
double volume(double,int);
long volume(long,int,int);
int main(){
  cout<<volume(10)<<"\n";
  cout<<volume(2.5,8)<<"\n";
  cout<<volume(100L,75,15)<<"\n";
  return 0;
}
int volume(int s){
    return(s*s*s);
}
double volume(double r,int h){
    return(3.14519*r*r*h);
}
long volume(long int l,int b,int h){
    return(l*b*h);
}