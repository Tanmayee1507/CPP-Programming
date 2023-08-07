//take decimal number from user and convert it into binary format
#include<iostream>
using namespace std;

void DisplayBinary(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo%2;
        cout<<iDigit;
        iNo = iNo/2;

    }
    cout<<"\n";

}

int main()
{
    int iValue = 0;

    cout<<"Enter the decimal number"<<"\n";
    cin>>iValue;

    DisplayBinary(iValue);
    return 0;
}