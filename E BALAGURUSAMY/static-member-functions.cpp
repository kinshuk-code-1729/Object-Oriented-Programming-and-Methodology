//Static Member Functions in a class
#include<iostream>
using namespace std;
class stats{
    int k;
    static int c;
    public:
    void code(void){
        k=++c;
    }
    void display(void){
        cout<<"Obj. no. = "<<k<<endl;
    }
    static void cdisp(void){
        cout<<"Count = "<<c<<endl;
    }
};
int stats::c;
int main(){
    stats o1,o2;
    o1.code();
    o2.code();
    stats::cdisp();
    stats o3;
    o3.code();
    stats::cdisp();
    o1.display();
    o2.display();
    o3.display();
return 0;
}