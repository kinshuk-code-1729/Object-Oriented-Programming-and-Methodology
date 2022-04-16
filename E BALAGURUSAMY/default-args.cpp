// Default Argumentation
#include<iostream>
using namespace std;
void line(char k='*',int n=30){
    for(int i=0;i<=n;i++) cout<<k;
    cout<<endl;
}
float val(float x,float y,float z=0.15){
    int p=1;
    float s=x;
    while (p<=y){
        s*=1+z;
        p+=1;
    }
    return(s);
}
int main(){
    float m;
    line();
    m=val(5000.00,5);
    cout<<endl<<"Net value = "<<m<<endl<<"\n";
    line('=');
return 0;
}