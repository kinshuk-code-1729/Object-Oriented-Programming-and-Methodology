// Temperature Converter
#include <iostream>
using namespace std;
int main(){
    int c;
    float temp,conv;
    cout<<"To Convert The Temperature Choose Your Option Below"<<"\n";
    cout<<"1. Celsius to Fahrenheit"<<"\n";
    cout<<"2. Fahrenheit to Celsius"<<"\n";
    cout<<"You Choose ?? : ";
    cin>>c;
    if(c==1)
    { cout<<"\n"<<"Enter Temperature in Deg. Celsius : ";
      cin>>temp;
      conv=1.8*(temp+32);
      cout<<"The Temp in Deg. Fahr is : "<<conv<<"\n";
    }
    else
    { if(c==2)
      { cout<<"\n"<<"Enter Temperature in Deg. Fahrenheit : ";
        cin>>temp;
        conv=(temp-32)/1.8;
        cout<<"The Temp in Deg. Celsius is : "<<conv<<"\n";
      }
      else
       cout<<"Wrong Input !! , Please Enter 1 or 2 !!!!";
    }
  return 0;    
}
