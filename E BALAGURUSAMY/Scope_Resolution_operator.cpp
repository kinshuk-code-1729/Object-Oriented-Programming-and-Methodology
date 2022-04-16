// Scope of a variable (scope resolution operator)
#include<iostream>
using namespace std;
int x=40;
int main(){
    int x=50;
    {
        int y=x;
        int x=30;
        cout<<"Inside innermost block";
        cout<<"\nx = "<<x;
        cout<<"\ny = "<<y;
        cout<<"\n::x = "<<::x;
    }
    cout<<"\nOutside inner block";
    cout<<"\nx = "<<x;
    cout<<"\n::x = "<<::x;
return 0;
}