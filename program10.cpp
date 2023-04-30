/*
Function Name:Iteration()
input: integer
output: Jay ganesh
Description: Display Jay Ganesh 
Author: Tanmayee K Deepak
Date:  26 April 2023
Language:CPP Programming
*/

#include<iostream>

using namespace std;

void ForLoop(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        cout<<"Jay Ganesh..\n";
    }
}

int main()
{
    int iValue = 0;
    cout<<"Enter the number of times you want to display the string:"<<"\n";
    cin>>iValue;

    ForLoop(iValue);

    return 0;
}
