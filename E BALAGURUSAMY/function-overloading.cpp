// Function Overloading in C++
#include<iostream>
using namespace std;
int vol(int);
double vol(double,int);
long vol(long,int,int);
int main(){
cout<<"vol.1 = "<<vol(10)<<endl;
cout<<"vol.2 = "<<vol(2.5,8)<<endl;
cout<<"vol.3 = "<<vol(100L,75,15)<<endl;
return 0;
}
int vol(int k){
    return(k*k*k);
}
double vol(double x,int y){
    return(3.14159*x*x*y);
}
long vol(long p,int q, int r){
    return(p*q*r);
}