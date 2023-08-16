// accept a no. and accept bit positionfrom user create a mask and reverse it

#include<iostream>

using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;
       
    iMask = iMask <<(iPos-1);
    iMask = ~ iMask;

        iResult = iNo & iMask;

            return iResult ;
        
}

int main()
{
    UINT iValue1 = 0, iValue2=0;
    UINT iRet = 0;
    cout<<"Enter the decimal number"<<"\n";
    cin>>iValue1;
    cout<<"Enter the bit position"<<"\n";
    cin>>iValue2;
    iRet = OffBit(iValue1, iValue2);
  cout<<"Result is:"<<iRet<<"\n";
    return 0;
}