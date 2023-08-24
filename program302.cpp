//DS int cpp program302, 303,304,305
#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    private:
        PNODE First;    // Characteristics
        int iCount; 

    public:
        SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
        

};

void SinglyLL :: InsertFirst(int no)
{
}
void SinglyLL :: InsertLast(int no)
{
}
void SinglyLL :: InsertAtPos(int no, int ipos)
{}
void SinglyLL :: DeleteFirst()
{}
void SinglyLL :: DeleteLast()
{}
void SinglyLL :: DeleteAtPos(int ipos)
{}
void SinglyLL :: Display()
{}
int SinglyLL :: Count()
{
    return 0;
}
SinglyLL :: SinglyLL()
{
    cout<<"Inside constructor \n";
    First = NULL;
    iCount = 0;
}

int main()
{
    SinglyLL obj1;    //obj value is 12 byte
    SinglyLL obj2;
    return 0;
}