// Palindrome program
#include <iostream>
using namespace std;
int main(){
  char str[20],c;
  int l,i,j,k=1;
  cout<<"Enter any string : ";
  cin.getline(str,20);
  for(l=0;str[l]!='\0';++l);
  for(i=0,j=l-1;i<l/2;++i,--j)
  {
      if(str[i]!=str[j])
      { k=0;
        break;
      }
  }
  if(k)
     cout<<"The entered string is a palindrome string";
  else
  cout<<"The entered string is not a palindrome string";
return 0;
}
