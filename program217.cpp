/*problem on digits
but problem in this code is iNo is destroyed causing problems
*/
#include<iostream>
using namespace std;

class Digit
{
    public:
    int iNo;

    Digit(int X)
    {
        iNo = X;
    }
    int SumDigits()
    {
        int iDigit = 0;
        int iSum = 0;
        while(iNo!=0)
        {
            iDigit = iNo%10;
            iSum = iSum + iDigit;
            iNo= iNo/10;
        }
        return iSum;
    }
};

int main()  //1
{
    int iValue = 0;
    int iRet = 0;
    cout<<"Enter the number:"<<"\n";
    cin>>iValue;

    Digit dobj(iValue);
    iRet = dobj.SumDigits();
    cout<<"Summation of Digits:"<<iRet<<"\n";

    return 0;
}