//using constructor
//check 208.cpp
#include<iostream>
using namespace std;

class Number
{
    private:
    int iNo1;// characteristics
    int iNo2;
    Number(int X, int Y) // constructor //encapsulation
    {
        iNo1 = X;
        iNo2 = Y;
        
    }
    
    int Maximum()// behaviour
    {
        if(iNo1>iNo2)
        {
            return iNo1;
        }
        else
        {
            return iNo2;
        }
    }

};

int main()
{
    int iRet= 0;
    int iValue1 = 0, iValue2 = 0;  int iValue1 = 0, iValue2 = 0;
   
    cout<<"Enter first number:"<<"\n";
    cin>>iValue1;
    
    cout<<"Enter second number:"<<"\n";
    cin>>iValue2;
   
 Number nobj(iValue1, iValue2);
    iRet = nobj.Maximum();// object
    cout<<"Maximum number is:"<<iRet<<"\n";
return 0;
}