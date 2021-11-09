// Program to show hybrid inheritance
#include<iostream>
using namespace std;
class Vehicle{
    public:
    Vehicle(){
        cout<<"This is a Vehicle"<<endl;
    }
};
class Fare:public Vehicle{
    public:
    Fare(){
        cout<<"Fare of Vehicle"<<endl;
    }
};
class Car:public Vehicle{
};
class Bus:public Vehicle,public Fare{
};
int main(){
    Bus obj;
    return 0;
}