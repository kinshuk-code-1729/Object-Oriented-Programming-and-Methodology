// Program to demonstrate Exception Handling
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter two numbers : ";
    cin>>x>>y;
    try
    {
        if(y==0) throw y;
        else cout<<x/y;
    }
    catch(int k)
    {
        cout<<"Second Operand cannot be Zero";
    }
    return 0;
}
