/*problem on digits
check 216.cpp 
*/
#include<iostream>
using namespace std;

class Digit
{
    private:
    int iNo;

    Digit(int X)
    {
        iNo = X;
    }
};

int main()  //1
{
    int iValue = 0;

    cout<<"Enter the number:"<<"\n";
    cin>>iValue;

    Digit dobj(iValue);
    return 0;
}