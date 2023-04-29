/*
Function Name:display result
input: unsigned integer
output: 
Description: write a program to accept marks and display the class accordingly
0-34=fail
35-49= pass class
50-59= second class
60-74=first class
74- 100 = first class with distinction
Author: Tanmayee K Deepak
Date:  25 April 2023
Language:C Programming
*/
#include <iostream>
using namespace std;

void DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) ||(fMarks > 100.00f))
    {
        cout<<"invalid Input"<<"\n";
        cout<<"Please enter marks in between range 0 to 100"<<"\n";
    }

    if((fMarks >= 0.0f) && (fMarks < 35.00f))
    {
        cout<<"You are fail"<<"\n";
    }
    else if((fMarks>=35.00f)&&(fMarks<50.00f))
    {
        cout<<"you got pass class"<<"\n";
    }
    else if((fMarks>=50.00f)&&(fMarks<60.00f))
    {
        cout<<"you got second class"<<"\n";
    }
    else if((fMarks>=60.0f)&&(fMarks<75.0f))
    {
        cout<<"you got first class"<<"\n";
    }
    else if((fMarks>=75.0f)&&(fMarks<=100.0f))
    {
        cout<<"you got first class with distinction"<<"\n";
    }
}
int main()
{
    float fValue = 0;
     cout<<"Please enter your marks"<<"\n";
    cin>>fValue;

    DisplayResult(fValue);
    return 0;
}