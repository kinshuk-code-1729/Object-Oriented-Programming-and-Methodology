// Program to illustrate hierarchical inheritance
#include<iostream>
using namespace std;
class Vehicle{
    public:
    Vehicle(){
        cout<<"This is a Vehicle"<<endl;
    }
};
class Car:public Vehicle{
};
class Bus:public Vehicle{
};
int main(){
    Car obj1;
    Bus obj2;
    return 0;
}