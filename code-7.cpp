// Program to demonstrate function
#include<iostream>
using namespace std;
class person
{
 char name[30];
 int age;
public:
    void getdata(){
    cout<<"Enter Name : ";
    cin>>name;
    cout<<endl<<"Enter Age : ";
    cin>>age;
    }
    void display(){
    cout<<endl<<"Name : "<<name;
    cout<<endl<<"Age : "<<age;
}
};
int main(){
    person p;
    p.getdata();
    p.display();
    return (0);
}
