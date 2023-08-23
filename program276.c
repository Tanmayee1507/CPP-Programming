//doubly circular linked list
//prog297, 298
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL) &&(*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;

        *Head = newn;
    }

    (*Head)->prev = *Tail;
    (*Tail)->next = *Head;
}
void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
       PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL)&&(*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        (*Tail)->next = newn;
        newn->prev = *Tail;

        *Tail = newn; 
    }

    (*Head)->prev = *Tail;
    (*Tail)->next = *Head;
}
void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL)&&(*Tail == NULL))
    {
        return ;
    }
    else if((*Head) == (*Tail))
    {
        free(*Head); 

        *Head = NULL;
        *Tail = NULL;
    }
    else
    { 
        *Head = (*Head)->next;
        free((*Tail)->next);

        (*Tail)->next= *Head;
        (*Head)->prev= *Tail;
    }
    
}
void DeleteLast(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL)&&(*Tail == NULL))
    {
        return ;
    }
    else if((*Head)==(*Tail))
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Tail = (*Tail)->prev;
        free((*Tail)->next);  //free(*Head)->prev;
    
    (*Head)->prev = *Tail;
    (*Tail)->next = *Head;
    }   
}
void InsertAtPos(PPNODE Head, PPNODE Tail, int No, int iPos)
{
    int iLength = 0;
    PNODE temp = *Head;
    int iCnt = 0;
    PNODE newn = NULL;
    iLength = Count(*Head,*Tail);
    if((iPos < 1)||(iPos > iLength+1))
    {
        printf("Invalid Position \n");
        return ;
    }
    if(iPos == 1)
    {
        InsertFirst(Head, Tail, No);
    }
    else if(iPos == iLength+1)
    {
        InsertLast(Head, Tail, No);
    }
    else
    {
        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp =temp->next;
        }
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;
    }
}
void DeleteAtPos(PPNODE Head, PPNODE Tail,int iPos)
{
    int iLength = 0;
    PNODE temp = *Head;
    int iCnt = 0;
    
    iLength = Count(*Head,*Tail);
    if((iPos < 1)||(iPos > iLength))
    {
        printf("Invalid Position \n");
        return ;
    }
    if(iPos == 1)
    {
        DeleteFirst(Head, Tail);
    }
    else if(iPos == iLength)
    {
        DeleteLast(Head, Tail);
    }
    else
    {
        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
    
      temp->next = temp->next->next;
      free(temp->next->prev);
      temp->next->prev = temp;
    }
}
int Count(PNODE Head, PNODE Tail)
{
    int iCount = 0;
    if((Head != NULL)&&(Tail != NULL))
    {
        do
        {
            iCount++;
            Head = Head->next;
        } while(Head != Tail->next);
            return iCount;
    }
    else
    {   
        return 0;
    }
}

void Display(PNODE Head, PNODE Tail)
{
    if((Head != NULL)&&(Tail != NULL))
    {
        do{
            printf("|%d|<=>", Head->data);
            Head = Head->next;
        } while(Head != Tail->next);

        printf("\n");
    }
    else
    {
        printf("Linked List is empty \n");
    }
}
int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    int iRet = 0;
    InsertFirst(&First, &Last,51);
    InsertFirst(&First, &Last,21);
    InsertFirst(&First, &Last,11);
    
    Display(First, Last);
    iRet = Count(First,Last);
    printf("No. of Nodes are:%d\n", iRet);

    InsertLast(&First, &Last,101);
    InsertLast(&First, &Last,111);
    InsertLast(&First, &Last,121);
    
    Display(First, Last);
    iRet = Count(First,Last);
    printf("No. of Nodes are:%d\n", iRet); 

    InsertAtPos(&First, &Last,55,4);
     Display(First, Last);
    iRet = Count(First,Last);
    printf("No. of Nodes are:%d\n", iRet);

    DeleteAtPos(&First, &Last,4);
      Display(First, Last);
    iRet = Count(First,Last);
    printf("No. of Nodes are:%d\n", iRet);


    DeleteFirst(&First, &Last);
    Display(First, Last);
    iRet = Count(First,Last);
    printf("No. of Nodes are:%d\n", iRet);

DeleteLast(&First, &Last);
    Display(First, Last);
    iRet = Count(First,Last);
    printf("No. of Nodes are:%d\n", iRet);
    return 0;
}