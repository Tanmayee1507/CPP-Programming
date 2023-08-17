#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int iNo;
    struct Node *next;
};

typedef struct Node Node;
typedef struct Node *PNODE;
typedef struct Node **PPNODE; 


int Count(PNODE Head)
{
    return 0;
}
void InserFisrt(PPNODE Head, int No)
{
    PNODE newn = NULL;
    //allocate memory for node
    newn = (PNODE)malloc(sizeof(NODE));
    // initialize the node

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL) // LL is empty
    {
        *Head = newn;
    }
    else //LL has atleast one node
    {

    }

}
void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    //allocate memory for node
    newn = (PNODE)malloc(sizeof(NODE));
    // initialize the node

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL) // LL is empty
    {
        *Head = newn;
    }
    else //LL has atleast one node
    {

    }
}
void InsertAtPos(PPNODE Head, int No, int Pos)
{

}
void DeleteFirst(PPNODE Head)
{

}
void DeleteLast(PPNODE Head)
{

}
void DeleteAtPos(PPNODE Head, int Pos)
{

}
void Display(PNODE Head)
{
    printf("Elements of Linked List are:\n");
    while(Head != NULL)
    {
        printf("|%d|->", Head -> data);
        Head = Head -> next;

    }
}
int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 111);
    InsertFirst(60, 51);
    InsertFirst(&First, 101);
    InsertFirst(60, 51);
    InsertFirst(&First, 51);
    InsertFirst(60, 51);
    InsertFirst(&First, 21);
    InsertFirst(60, 21);
    InsertFirst(60, 11);

    Display(First);
    iRet = Count(First);
    printf("No. of nodes are: %d \n", iRet);

    InsertLast(&First,121);
    InsertLast(&First, 151);

    Display(First);
    iRet = Count(First);
    printf("No. of nodes are: %d \n", iRet);
    

    return 0;
}