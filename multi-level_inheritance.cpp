#include<iostream>
using namespace std;
class Vehicle{
    public:
    Vehicle(){
        cout<<"This is a Vehicle"<<endl;
    }
};
class FourWheeler:public Vehicle{
    public:
    FourWheeler(){
        cout<<"Vehicles Having 4 wheels"<<endl;
    }
};
class Car:public FourWheeler{
};
int main(){
    Car obj;
    return 0;
}