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

class Queue
{
    private:
        PNODE First;
        int iCount;

    public:
        Queue();
        void Enqueue(int no);  // InsertLast
        int Dequeue();          //DeleteLast
        void Display();
        int Count();    
};

  Queue :: Queue()
  {
    First = NULL;
    iCount = 0;
  }
void Queue :: Enqueue(int no)
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
int Queue :: Dequeue()
{
    int Value = 0;
    if(iCount == 0)
    {
        cout<<"Queue is empty \n";
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
void Queue :: Display()
{
    if(First == NULL)
    {
        cout<<"Nothing to display as queue is empty";
    }
    PNODE temp = First;
    cout<<"Elements of Queue are: \n";
    for(int iCnt = 1 ; iCnt <= iCount; iCnt++)
    {
        cout<<temp -> data<<"\n";
        temp = temp -> next;
    }
}
int Queue :: Count()
{
    return iCount;
}

int main()
{
    int iChoice = 1;
    Queue obj;
    int iValue = 0;
    int iRet = 0;

    cout<<"-------------------- \n";
    cout<<"Dynamic implementation of Queue \n";
    cout<<"---------------------\n";
    while(iChoice != 0)
    {
        cout<<"----------------------\n";
    
        cout<<"1 : Insert elements from Queue \n";
        cout<<"2 : Remove elements from Queue \n";
        cout<<"3 : Display elements from Queue \n";
        cout<<"4 : Count elements from Queue \n";
        cout<<"0 : Terminate the application \n";

        cout<<"----------------------\n";
        cout<<"Please enter the option:\n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1: 
            cout<<"Enter the element that you want to insert \n";
            cin>>Value;
            obj.Push(iValue);
            break;

            case 2:
            iRet = obj.Pop();
            if(iRet != -1)
            {
                cout<<"Removed element from queue is :"<<iRet<<"\n";
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