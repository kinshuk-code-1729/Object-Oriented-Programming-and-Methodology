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
int main(){
    Car obj;
    return 0;
}