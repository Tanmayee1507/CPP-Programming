//accept a no and bit position from user and toggle that bit

#include<iostream>

using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X00000040;
        return (iNo ^ iMask) ;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    cout<<"Enter the decimal number"<<"\n";
    cin>>iValue;
    iRet = ToggleBit(iValue);
  cout<<"Result is:"<<iRet<<"\n";
    return 0;
}