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

class Stack
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
       
    }
    iCount--;
    return Value;
}    
void Stack :: Display()
{
    if()
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
    int iChoice = 1;
    Stack obj;
    int iValue = 0;
    int iRet = 0;

    cout<<"-------------------- \n";
    cout<<"Dynamic implementation of stack \n";
    cout<<"---------------------\n";
    while(iChoice != 0)
    {
        cout<<"----------------------\n";
    
        cout<<"1 : Push elements from stack \n";
        cout<<"2 : Pop elements from stack \n";
        cout<<"3 : Display elements from stack \n";
        cout<<"4 : Count elements from stack \n";
        cout<<"0 : Terminate the application \n";

        cout<<"----------------------\n";
        cout<<"Please enter the option:\n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1: 
            cout<<"Enter the element that you want to push \n";
            cin>>Value;
            obj.Push(iValue);
            break;

            case 2:
            iRet = obj.Pop();
            if(iRet != -1)
            {
                cout<<"Popped eleent from stack is :"<<iRet<<"\n";
            }
            break;

            case 3:
            obj.Display();
            break;

            case 4:
            iRet = obj.Count();
            cout<<"No of elements are:"<<iRet<<"\n";
            break;

            case 0:
            cout<<"Tankyou for using application \n";
            break;

            default:
            cout<<"Please enter valid option \n";
            break;

        }//end of switch

    }// end of while
    return 0;
}//end of main