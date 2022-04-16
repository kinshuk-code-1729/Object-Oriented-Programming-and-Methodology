// Class in C++
#include<iostream>
using namespace std;
class people{
    char name[30];
    int age;
    public:
    void dataset(void);
    void datafetch(void);

};
void people::dataset(){
    cout<<"Enter Name : ";
    cin>>name;
    cout<<endl<<"Enter Age : ";
    cin>>age;
}
void people::datafetch(){
    cout<<endl<<"Name : "<<name;
    cout<<endl<<"Age : "<<age;
}
int main(){
    people k;
    k.dataset();
    k.datafetch();
return 0;
}