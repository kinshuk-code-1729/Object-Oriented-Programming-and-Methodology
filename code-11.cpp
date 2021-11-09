// Program to demonstrate operator overloading
#include<iostream>
using namespace std;
class val{
int x,y;
public:
val(){
    x=56;
    y=63;
}
void display(){
    cout<<endl<<"X = "<<x<<endl<<"Y = "<<y;
}
int operator-(){
    x=-x; y=-y;
    return x,y;
}
};
int main(){
val k;
cout<<"Values before operator Overloading";
k.display();
cout<<endl<<"Values after operator Overloading";
-k;
k.display();
return 0;
}