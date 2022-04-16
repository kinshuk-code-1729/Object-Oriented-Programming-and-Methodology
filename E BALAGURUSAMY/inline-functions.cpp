// Inline function is a request to the compiler not a command
#include<iostream>
using namespace std;
inline float into(float m,float n){
    return(m*n);
}
inline float upon(double u,double v){
    return(u/v);
}
int main(){
    float x=25.678,y=7.48;
    cout<<"x*y = "<<into(x,y)<<"\n";
    cout<<"x/y = "<<upon(x,y);
return 0;
}