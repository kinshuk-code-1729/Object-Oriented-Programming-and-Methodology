// Program to illustrate the static binding of the member functions of a class
#include<iostream>
using namespace std;
class Test{
    int code;
    static int count;
    public:
    void setcode(void){
        code=++count;
    }
    void showcode(void){
        cout<<"Object Member : "<<code<<endl;
    }
    static void showcount(void){
        cout<<"Count = "<<count<<endl;
    }
};
int Test::count;
int main(){
Test t1,t2;
t1.setcode();
t2.setcode();
Test::showcount();
Test t3;
t3.setcode();
Test::showcount();
t1.showcode();
t2.showcode();
t3.showcode();
return 0;
}