#include<iostream>

namespace Marvellous
{
    class Demo
    {
        public:
        int A;
        int B;

        Demo(int i = 10, int j = 20)
        {
            A = i;
            B = j;
        }
    };
}

using namespace Marvellous;
int main()
{
Demo obj1;

std::cout<<"Inside namespace"<<"\n";
    return 0;
}
