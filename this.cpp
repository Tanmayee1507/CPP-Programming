#include<iostream>
using namespace std;


class Demo
{
    public:
    int No1;
    int No2;

    Demo(int i, int j)
    {
        No1 = i;
        No2 = j;
    }

    void Fun(int A, int B) 
    {
        cout<<"Inside Fun"<<this->No1<<"\n";
        cout<<"Inside Fun"<<this->No2<<"\n";
    }

    void Gun(int A)  
    {
        cout<<"inside Gun"<<this->No1<<"\n";
        cout<<"Inside Gun"<<this->No2<<"\n";
    }
};
int main()
{
    Demo obj1(10,11);
    Demo obj2(50,100);

    obj1.Fun(101,121);
    obj2.Gun(300);
    return 0;
}
