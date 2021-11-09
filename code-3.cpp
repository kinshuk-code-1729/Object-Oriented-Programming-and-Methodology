// Program to demonstrate constructor
#include<iostream>
using namespace std;
class integer{
    int m,n;
    public:
    integer(int,int);
    void display(void){
        cout<<"m = "<<m<<endl;
        cout<<"n = "<<n<<endl;
    }
};
integer::integer(int x,int y){
    m=x; n=y;
}
int main(){
    integer int1(0,100);           // Implicit Call
    integer int2=integer(25,75);  //  Explicit Call
cout<<endl<<"OBJECT 1"<<endl;
int1.display();
cout<<endl<<"OBJECT 2"<<endl;
int2.display();
return 0;
}