#include<iostream>
using namespace std;

bool CheckEven(int No)
{
    if((No % 2) == 0)
    {
        return true;
    }
    else 
    {
        return false;
    } 
}

int main()
{
    int Value = 0;bool bRet = false;
    cout<<"Enter number : \n";  
    cin>>Value;                 
    bRet = CheckEven(Value);    

    if(bRet == true)
    {
        cout<<"It is even number\n";
    }
    else
    {
        cout<<"It is odd number\n";
    }

    return 0;
}
