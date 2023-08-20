//289 by sir
// singly circular linked list
//InsertLast insert first and Display
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int No)
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
        newn->next = *Head;
        *Head = newn;  
    }
    (*Tail)->next = *Head;
}

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
{
    if(Head != NULL && Tail != NULL)
    {
    do
    {
        printf("|%d|->", Head->data);
        Head = Head->next;
    }while(Head != Tail->next);

    printf("\n");
}
}

int main()
{

    PNODE First = NULL;
    PNODE Last = NULL;      //#
    int iRet = 0;

    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);

    InsertLast(&First,&Last,101);
    InsertLast(&First,&Last,111);
    InsertLast(&First,&Last,121);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of nodes are: %d\n", iRet);
    return 0;
}