#include<iostream>
using namespace std;

class Demo
{
    public:
    int A;
    int B;
    const int C;
    const int D;

    Demo() : C(11), D(21)
    {
        A = 0;
        B = 0;
    }

    Demo(int i, int j, int k, int l) : C(k), D(l)
    {
        A = i;
        B = j;
    }

    void Fun()
    {
        A++;
        B++;
       // C++;
       // D++;
    }

    void Gun () const
    {
        A++;
        B++;
     //   C++;
       // D++;
    }
};

int main()
{
    Demo obj1(11,21,51,101);
    const Demo obj2(1,2,3,4);
    
obj1.Fun();
obj1.Gun();
    return 0;
}
