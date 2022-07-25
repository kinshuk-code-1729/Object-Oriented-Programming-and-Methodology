//Progrom to Check for 4 digit Armstrong Number.
#include <iostream>
using namespace std;
#include<math.h>
int main(){
      float n,m,s=0,b,count=0;
      cout<<"enter any number : ";
      cin>>n;
      b=n;
      while(n){
            n=n/10;
            count++;
      }
  
      while(n>0){
            m=n%10;
            s=s+pow(m,count);
            n=n/10;
      }


      if(b==s)    cout<<" amstrong number is"<<b;
      else        cout<<"not amstrong";
return 0;
}
