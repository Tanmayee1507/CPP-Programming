//program322 for stack
#include <iostream>
using namespace std;

typedef class Node
{
    public:
        int data;
        Node *next;

        Node(int value)
        {
            data = value;
            next = NULL;
        }
        
}NODE, *PNODE;

class stack
{
    private:
        PNODE First;
        int iCount;

    public:
        Stack();
        void Push(int no);  // InsertLast
        int Pop();          //DeleteLast
        void Display();
        int Count();    
};

  Stack :: Stack()
  {
    First = NULL;
    iCount = 0;
  }
void Stack :: Push(int no)
{
    PNODE newn = new NODE(no);
    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        PNODE temp = First;
        while(temp -> next != NULL)
        {
            temp = temp ->next;
        }
        temp -> next = newn;
    }
    iCount++;
}
int Stack :: Pop()
{
    int Value = 0;
    if(iCount == 0)
    {
        cout<<"Stack is empty \n";
        return -1;
    }
    else if(iCount == 1)
    {
        Value = First -> data;
        delete First;
        First = NULL;
    }
    else
    {
        Value = First -> data;
        PNODE temp = First;
        First = First -> next;
        delete temp;
    }
    iCount--;
    return Value;
}    
void Stack :: Display()
{
    PNODE temp = First;
    cout<<"Elements of Stack are: \n";
    for(int iCnt = 1 ; iCnt <= iCount; iCnt++)
    {
        cout<<temp -> data<<"\n";
        temp = temp -> next;
    }
}
int Stack :: Count()
{
    return iCount;
}

int main()
{
    return 0;
}