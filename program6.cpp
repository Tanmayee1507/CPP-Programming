/*
Function Name:even odd
input: signed integer
output: Boolean
Description: check whether the number is even or  odd
Author: Tanmayee K Deepak
Date:  25 April 2023
Language:C Programming
*/

#include<iostream>
using namespace std;

bool CheckEvenOdd(int iNo)
{
    if((iNo%2) == 0)
    {
        return true;
    }
    else{
        return false;
    }

    return iNo;
}
int main()
{
    int iValue = 0;
    cout<<"Enter the number to check if number is even or odd:"<<"\n";
    cin>>iValue;
    bool bRet = false;
    bRet =  CheckEvenOdd(iValue);

if(bRet== true)
{
    cout<<iValue<<"is Even"<<"\n";
}
else
{
    cout<<iValue<<" is odd"<<"\n";
}
return 0;
}