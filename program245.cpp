//accept a no and bit position from user and off that bit

#include<iostream>

using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;
        if((iPos<1)||(iPos>32))
        {
        cout<<"invalid position"<<"\n";
        return false;
        }
    iMask = iMask <<(iPos-1);
        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            return (iNo ^ iMask) ;
        }
        else
        {
            return iNo;

        }
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