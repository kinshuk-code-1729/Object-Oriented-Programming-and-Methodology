// Progrom to print sum of elements of diagonal of a matrix.
#include<iostream>
using namespace std;
int main(){
  int a[50][50],b=0,i,j,m,n;
  cout<<"Enter the order of matrix ";
  cin>>n;
  cout<<"*"<<endl;
  cin>>m;
  cout<<"\nEnter the elements of matrix "<<endl;
  for (i=1;i<=n;i++){
    for (j=1;j<=m;j++)
      cin>>a[i][j];
  }
  cout<<"\nElements of matrix are "<<endl;
  for (i=1;i<=n;i++){
    cout<<endl;
    for(j=1;j<=m;j++)
      cout<<a[i][j]<<" ";
  }
  cout<<"\nSum of diagonal element is "<<endl;
  for (i=1;i<=n;i++){
    for (j=1;j<=m;j++){
      if (i==j)
        b += a[i][j];
    }
  }
  cout<<b;
  return 0;
}
