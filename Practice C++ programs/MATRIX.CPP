// Progrom to find multiplication of two matrices.
#include<iostream>
using namespace std;
int main(){
  int a[50][50],b[50][50],c[50][50],i,j,n,m,l=1;
  cout<<"Enter the order of matrix (must be n*n) "<<endl;
  cin>>n;
  cout<<" * ";
  cin>>m;
  if (n==m){
    cout<<"\nMultiplication possible "<<endl;
  }
  else{
    cout<<"Multiplication not possible ";
    l=0;
  }
  if (l){
    cout<<"\nEnter the elements of matrix 1 "<<endl;
    for (i=1;i<=n;i++){
      for (j=1;j<=n;j++)
        cin>>a[i][j];
    }
    cout<<"\nElements of matrix 1 are ";
    for (i=1;i<=n;i++){
      cout<<endl;
      for (j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
    }
    cout<<"\nEnter the elements of matrix 2 "<<endl;
    for (i=1;i<=n;i++){
      for (j=1;j<=n;j++)
        cin>>b[i][j];
    }
    cout<<"\nElements of matrix 2 are ";
    for (i=1;i<=n;i++){
      cout<<endl;
      for (j=1;j<=n;j++)
        cout<<b[i][j]<<" ";
    }
    cout<<"\nMultiplication "<<endl;
    for (i=1;i<=n;i++){
      for (j=1;j<=n;j++){
        c[i][j]=0;
        for (int k=1;k<=n;k++){
          c[i][j]=c[i][j]+(a[i][j]*b[i][j]);
        }
      }
    }
    for (i=1;i<=n;i++){
      cout<<endl;
      for (j=1;j<=n;j++)
        cout<<c[i][j]<<" ";
    }
  }
return 0;
}
