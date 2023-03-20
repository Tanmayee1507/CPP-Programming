#include<iostream>
using namespace std;
class Base
{
    public:
    int A,B;

    void Fun()
    {
        cout<<"Inside Fun of Base"<<"\n";
    }

    void Gun()
    {
        cout<<"Inside Gun of Base"<<"\n";
    }

    void Sun()
    {
        cout<<"Inside Sun of Base"<<"\n";
    }
};

class Derived : public Base
{
    public:
    int X,Y;

    void Fun()
    {
        cout<<"Inside Fun of Derived"<<"\n";
    }

    void Gun()
    {
        cout<<"Inside Gun of Derived"<<"\n";
    }

    void Sun()
    {
        cout<<"Inside Sun of Derived"<<"\n";
    }
};

int main()
{
   /* Derived dobj;
    dobj.Fun();
    dobj.Gun();
    dobj.Sun();
    return 0;*/

    Base *bp = new Base; // no casting
    Derived *dp = new Derived;

    Base *bp1 = new Derived;  //upcasting(allowed)
    //Derived *dp1 = new Base;  // downcasting(NA)
}
