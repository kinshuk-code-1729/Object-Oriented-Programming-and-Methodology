// Manipulators in C++
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int x=56,y=345,z=3765;
    cout<<setw(10)<<"X"<<setw(10)<<x<<endl
        <<setw(10)<<"Y"<<setw(10)<<y<<endl
        <<setw(10)<<"Z"<<setw(10)<<z<<endl;
return 0;
}