// Nesting of member functions
#include<iostream>
using namespace std;
class collection{
    int p,q;
    public:
    void get(void);
    void show(void);
    int greatest(void);
};
int collection::greatest(void){
    if(p>=q)
        return(p);
    else
        return(q);
}
void collection::get(void){
    cout<<"Enter vals. of P & Q : ";
    cin>>p>>q;
}
void collection::show(void){
    cout<<"\nGreatest Val. = "<<greatest();
}
int main(){
collection n;
n.get();
n.show();
return 0;
}