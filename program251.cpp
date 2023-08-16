//accept a no and bit position from user and off that bit if it is on else keep off only

#include<iostream>

using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0XFFFFFFBF;
    
         iNo & 0XFFFFFFBF;

         return (iNo & 0XFFFFFFBF);
       
}

int main()
{
    UINT iValue = 0;
    UINT iBit = 0;
    UINT iRet = 0;
    cout<<"Enter the decimal number"<<"\n";
    cin>>iValue;
    cout<<"Enter the bit position"<<"\n";
    cin>>iBit;
    iRet = OffBit(iValue, iBit);
  cout<<"Result is:"<<iRet<<"\n";
    return 0;
}