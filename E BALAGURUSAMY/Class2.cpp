// Class in C++
#include<iostream>
using namespace std;
class item{
    float cost;
    int number;
    public:
    void dataset(int x,float y);
    void datafetch(void){
        cout<<"Number : "<<number;
        cout<<endl<<"Cost : "<<cost<<endl;
    }
};
void item::dataset(int x,float y){
    cost=y;
    number=x;
}
int main(){
    item p;
    cout<<"1st object"<<endl;
    p.dataset(100,299.95);
    p.datafetch();
    item q;
    cout<<endl<<"2nd object"<<endl;
    q.dataset(200,175.50);
    q.datafetch();
return 0;
}