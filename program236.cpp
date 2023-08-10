//accept a no. and check 11th bit of that no is on or off

#include<iostream>

using namespace std;

typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    
    UINT iMask = 0X400;
    UINT iResult = 0;
    iResult = iNo & iMask;
    
   
        if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
        iNo = iNo/2;

    cout<<"\n";

}

int main()
{
    UINT iValue = 0;
    bool bRet = false;
    cout<<"Enter the decimal number"<<"\n";
    cin>>iValue;
    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        cout<<"11th bit is on"<<"\n";
    }
    else
    {
        cout<<"11th bit is off"<<"\n";
    }
    return 0;
}