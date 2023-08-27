//doubly Circular Linked List program314

#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE, *PNODE;

class DoublyCL
{
    private:
        int iCount;
        PNODE First;
        PNODE Last;

    public:
        DoublyCL();
        ~DoublyCL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();

};

int main()
{
    
    return 0;
}