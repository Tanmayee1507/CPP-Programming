/*problem on digits
using temp variable
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
        int iTemp = iNo;
        while(iTemp!=0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            iTemp= iTemp / 10;
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