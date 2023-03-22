#include<iostream>
using namespace std;
class Base
{
    public:
    int A,B;

   virtual void Fun()
    {
        cout<<"Inside Fun of Base"<<"\n";
    }

   virtual void Gun()
    {
        cout<<"Inside Gun of Base"<<"\n";
    }

   virtual void Sun()
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

   virtual void Sun()
    {
        cout<<"Inside Sun of Derived"<<"\n";
    }
    virtual void Run()
    {
        cout<<"Inside Run of Derived"<<"\n";
    }
};

int main()
{
   
        cout<<"size of Base:"<<sizeof(Base)<<"\n";
          cout<<"size of Derived:"<<sizeof(Derived)<<"\n";

    Base *bp = new Derived; // upcasting

    bp->Fun();      //Derived Fun
    bp->Gun();      //Base Gun
    bp->Sun();      //Derived Sun
    //bp->Run();      //error
}
   

    
