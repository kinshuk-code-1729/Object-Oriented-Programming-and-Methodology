// Program to demonstrate abstract class
#include<iostream>
using namespace std;
class Base{  // Abstract Base Class
    public:
    virtual void show()=0; // Pure Virtual Function
};
class Derived:public Base{
    public:
    void show(){
        cout<<"Implementation of Virtual Function in Derived Class";
    }
};
int main(){
   // Base obj; // Compile Time Error
    Base *b;
    Derived d;
    b=&d;
    b->show();
    return 0;
}