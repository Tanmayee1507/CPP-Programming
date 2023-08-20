//Doubly Linked List
#include<stdio.h>
#include<stdlib.h>
//program271  delete at pos
//# added in new line addes
typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;  //#
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int No)// head call by address
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;   //#

    if(*Head ==NULL)// LL is empty
    {
        *Head = newn;
    }
    else//LL contains atleast 1 node
    {
        (*Head) ->prev = newn;
        newn->next = *Head;
        *Head = newn;
    }
}
void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;   //#

    if(*Head ==NULL)// LL is empty
    {
        *Head = newn;
    }
    else//LL contains atleast 1 node
    {
       while(temp-> next != NULL)
       {
        temp = temp-> next;
       }
        temp->next = newn;
        newn->prev = temp;
       
    }
}

void DeleteFirst(PPNODE Head)
{
    if(*Head == NULL)
    {
        return ;
    }
    else if((*Head)->next==NULL)
    {
        free(*Head);
        *Head= NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free((*Head)->prev);
        (*Head)->prev = NULL;

    }
}
void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;
      if(*Head == NULL)
    {
        return ;
    }
    else if((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp-> next;
        }
            free(temp -> next);
            temp->next = NULL;
    }
}

void Display(PNODE Head)
{
    printf("Elements of Linked List are: \n");
    printf("NULL<=>");
    while(Head != NULL)
    {
        printf("|%d|<=>",Head->data);
        Head= Head-> next;
    }
    printf("NULL \n");
}
int Count(PNODE Head)
{
    int iCount = 0;
    
    while(Head != NULL)
    {
       iCount++;
        Head= Head-> next;
    }
   
    return iCount;
}

void InsertAtPos(PPNODE Head, int No, int iPos)
{
    int iLength = 0;
    iLength = Count(*Head);
    PNODE newn = NULL;
    if ((iPos < 1)||(iPos > iLength))
    {
        printf("Invalid position \n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(Head, No);
    }

    else if(iPos == iLength+1)
    {
        InsertLast(Head, No);
    }
    else
    {
        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
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
void DeleteAtPos(PPNODE Head, int iPos)
{
        int iLength = 0;
    iLength = Count(*Head);
    PNODE newn = NULL;
    if ((iPos < 1)||(iPos > iLength))
    {
        printf("Invalid position \n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(Head);
    }

    else if(iPos == iLength+1)
    {
        DeleteLast(Head);
    }
    else
    {
        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    iRet = Count(First);
    printf("No of elements are:%d\n", iRet);
    Display(First);

    InsertLast(&First,111);
    InsertLast(&First,121);

    iRet = Count(First);
    printf("No. of elements are:%d \n", iRet);
    Display(First);

    DeleteFirst(&First);
    iRet = Count(First);
    printf("No. of elements are:%d \n", iRet);
    Display(First);

    DeleteLast(&First);
    iRet = Count(First);
    printf("No. of elements are:%d \n", iRet);
    Display(First);

    InsertAtPos(&First,55, 4);
    iRet = Count(First);
    printf("No. of elements are:%d \n", iRet);
    Display(First);

    DeleteAtPos(&First, 4);
     iRet = Count(First);
    printf("No. of elements are:%d \n", iRet);
    Display(First);
    return 0;
}