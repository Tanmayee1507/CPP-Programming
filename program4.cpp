/*
Function Name:Addition
input: unsigned integer, unsigned integer
output: unsigned integer
Description: addition of 2 numbers
Author: Tanmayee Kadam
Date: 18 April 2023
Language:CPP Programming
*/
#include<iostream>
using namespace std;
unsigned int Addition(unsigned int Value1, unsigned int Value2)
{
    unsigned int iResult = 0;

    iResult = Value1 + Value2;

    return iResult;
}

int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;

    cout<<"Enter first number:"<<"\n";
    cin>>iNo1;

    cout<<"Enter second number:"<<"\n";
    cin>>iNo2;

    iAns = Addition(iNo1,iNo2);

    cout<<"Addition is:"<<iAns<<"\n";

    return 0;
    
}
