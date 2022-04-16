// Static Class Members
#include<iostream>
using namespace std;
class item{
    static int c;
    int n;
    public:
    void input(int k){
        n=k;
        c++;
    }
    void count(void){
        cout<<"Count : "<<c<<endl;
    }
};
int item::c;
int main(){
    item x,y,z;
    x.count();
    y.count();
    z.count();
    x.input(100);
    y.input(200);
    z.input(300);
    cout<<"Data added"<<endl;
    x.count();
    y.count();
    z.count();
return 0;
}