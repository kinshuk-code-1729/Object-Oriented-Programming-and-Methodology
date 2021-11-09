// Program to demonstrate array
#include<iostream>
using namespace std;
class employee{
    private:
    char name[30];
    int age,sal;
    public:
    void getdata();
    void putdata();
};
void employee::getdata(){
    cout<<"Enter Name : ";
    cin>>name;
    cout<<endl<<"Enter Age : ";
    cin>>age;
    cout<<endl<<"Enter Salary : ";
    cin>>sal;
}
void employee::putdata(){
    cout<<endl<<"Name : "<<name;
    cout<<endl<<"Age : "<<age;
    cout<<endl<<"Salary : "<<sal<<endl;
}
int main(){
    int i,size;
    employee emp[size];
    cout<<"Enter Maximum no. of entries : ";
    cin>>size;
    for(i=0;i<size;i++){
        cout<<endl<<"Details of Employee "<<i+1<<endl;
        emp[i].getdata();
    }
    cout<<endl;
    for(i=0;i<size;i++){
        cout<<endl<<"Employee "<<i+1<<endl;
        emp[i].putdata();
    }
    return 0;
}