/*
Function Name:divisibility
input: signed integer
output: Boolean
Description:check if the number is divisible by 3 and 5
Author: Tanmayee K Deepak
Date:  25 April 2023
Language:CPP Programming
*/
#include<iostream>
using namespace std;

bool CheckDivisibility(int iNo)
{
    if(((iNo % 3) == 0) && (iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    return iNo;
}

int main()
{
    int iValue = 0;
    cout<<"Enter the number to check whether the number is divisible by 3 and 5:"<<"\n";
    cin>>iValue;
     bool bRet= false;

     bRet = CheckDivisibility(iValue);

     if(bRet == true)
     {
        cout<<iValue<<" is divisible by 3 and 5"<<"\n";
     }
     else
     {
        cout<<iValue<<" is not divisble by 3 and 5"<<"\n";
     }
     return 0;
}