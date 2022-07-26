// ARITHMETIC OPERATIONS(+,-,*,/)
#include <iostream>
using namespace std;
int main(){
  char op;
  float x,y,z;
  cout<<"Enter Two Numbers : ";
  cin>>x>>y;
  cout<<"Choose your operator (+,-,*,/) : ";
  cin>>op;
  cout<<"\n";
  if(op=='+')
   {z=x+y;
   cout<<x<<" + "<<y<<" = "<<z;
   }
  else if(op=='-')
   {z=x-y;
   cout<<x<<" - "<<y<<" = "<<z;
   }
  else if(op=='*')
  { z=x*y;
   cout<<x<<" X "<<y<<" = "<<z;}
  else if(op=='/')
   { z=x/y;
     cout<<x<<" / "<<y<<" = "<<z;
   }
else cout<<"Wrong OPERATOR !!!"<<"\n";
return 0;
}
