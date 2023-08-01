/*pattern printing
output:
*       *       *       *
*       *       *       *
*       *       *       *
*       *       *       *
*/
#include<iostream>
using namespace std;

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1;i <= iRow; i++)
    {
        for(j = 1;j <= iCol; j++)
        {
            cout<<"*"<<"\t";
        }
            cout<<"\n";
    }
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    cout<<"Enter no. of rows:"<<"\n";
    cin>>iNo1;
    cout<<"Enter no. of Coulmns:"<<"\n";
    cin>>iNo2;
    Display(iNo1, iNo2);
return 0;
}