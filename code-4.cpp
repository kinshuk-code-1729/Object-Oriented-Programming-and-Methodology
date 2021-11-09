// Program to show multiple inheritance
#include<iostream>
using namespace std;
class Vehicle{
    public:
    Vehicle(){
        cout<<"This is a Vehicle"<<endl;
    }
};
class FourWheeler{
    public:
    FourWheeler(){
        cout<<"Vehicles Having 4 wheels"<<endl;
    }
};
class Car:public Vehicle,public FourWheeler{
};
int main(){
    Car obj;
    return 0;
}