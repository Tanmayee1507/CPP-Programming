//288 by sir
// singly circular linked list
//InsertLast
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int No)
{}

void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
      PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*Head == NULL)&&(*Tail == NULL))  //LL is empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else    // LL contains atleast one node
    {
        (*Tail)-> next = newn;
        *Tail = newn; //(*Tail) = (*Tail)->next;
    }
      (*Tail)->next = *Head;
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int No, int iPos)
{}
void DeleteFirst(PPNODE Head, PPNODE Tail)
{}
void DeleteLast(PPNODE Head, PPNODE Tail)
{}
void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{}
int Count(PNODE Head, PNODE Tail)
{
    return 0;
}
void Display(PNODE Head, PNODE Tail)
{}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;      //#
    int iRet = 0;

    InsertLast(&First,&Last,101);
    InsertLast(&First,&Last,111);
    InsertLast(&First,&Last,121);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of nodes are: %d\n", iRet);
    return 0;
}