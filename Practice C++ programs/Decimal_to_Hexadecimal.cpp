// Progrom to convert a decimal number to its equivalent Hexdecimal number.
#include<iostream>
using namespace std;
int main()
{
    int decimalNum, rem, i=0;
    char hexaDecimalNum[50];
    cout<<"Enter the Decimal Number: ";
    cin>>decimalNum;
    while(decimalNum!=0)
    {
        rem = decimalNum%16;
        if(rem<10)
            rem = rem+48;
        else
            rem = rem+55;
        hexaDecimalNum[i] = rem;
        i++;
        decimalNum = decimalNum/16;
    }
    cout<<"\nEquivalent Hexadecimal Value: ";
    for(i=i-1; i>=0; i--)
        cout<<hexaDecimalNum[i];
    cout<<endl;
    return 0;
}
