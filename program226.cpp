//take decimal number from user and add binary value
#include<iostream>
using namespace std;

void DisplayBinaryResults(int iNo1, int iNo2)
{   
    int iResult = 0;
    iResult = iNo1 & iNo2;
    cout<<"Result of & is:"<<iResult<<"\n";
    iResult = iNo1 | iNo2;
    cout<<"Result of | is:"<<iResult<<"\n";
    iResult = iNo1 ^ iNo2;
    cout<<"Result of ^ is:"<<iResult<<"\n";

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter the first number"<<"\n";
    cin>>iValue1;

cout<<"Enter the second number"<<"\n";
    cin>>iValue2;
    DisplayBinaryResults(iValue1, iValue2);
    return 0;
}