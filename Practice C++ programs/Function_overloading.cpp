// Function Overloading
#include<iostream>
using namespace std;
int volume(int a){
    return a*a*a;
}
double volume(double r,int h){
    return 3.1416*r*r*h;
}
long volume(long int l,int b,int h){
    return(l*b*h);
}
int main(){
  int a,h,b;
  double r;
  long int l;
  cout<<"Enter Side of the Cube : ";
  cin>>a;
  cout<<endl<<"Volume of the cube = "<<volume(a);
  cout<<endl<<"Enter Radius of the cylinder : ";
  cin>>r;
  cout<<endl<<"Enter height of the cylinder : ";
  cin>>h;
  cout<<endl<<"Volume of the cylinder  = "<<volume(r,h);
  cout<<endl<<"Enter length of the cuboid : ";
  cin>>l;
  cout<<endl<<"Enter width of the cuboid : ";
  cin>>b;
  cout<<endl<<"Enter height of the cuboid : ";
  cin>>h;
  cout<<endl<<"Volume of the cuboid = "<<volume(l,b,h);
  return 0;
}