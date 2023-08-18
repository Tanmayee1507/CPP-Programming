#include<stdio.h>
#include<stdlib.h>
//check prg267 by sir

typedef struct Node
{
    int data;
    struct Node *next;
} NODE, *PNODE, **PPNODE;
//1:Allocate memory for new node
//2: Initialize the node
//3: check if LL is empty or not
//4: if LL is empty store address of new node in First
//5: else store the address of newnode inside nxt pointer of old first node
//6: Update first pointer with address of new node
void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));     //1

    newn -> data = No;                      //2
    newn -> next = NULL;

    if(*Head == NULL)                       //3
    {
        *Head = newn;                       //4
    }
    else
    {
        newn -> next = *Head;               //5
        *Head = newn;                       //6
    }
}
void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));      //1
    PNODE temp = *Head; 

    newn -> data = No;                       //2
    newn -> next = NULL;

    if(*Head == NULL)                        //3
    {
        *Head = newn;                        //4
    }
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }      
          temp -> next = newn;  
    }
}

void Display(PNODE Head)
{
    printf("Elements of LL are: \n");

    while(Head != NULL)
    {
        printf("|%d| ->", Head -> data);
        Head = Head -> next;
    }
    printf("NULL \n");
}
int Count(PNODE Head)
{
    int iCount = 0;
    while(Head != NULL)
    {
        iCount++;
        Head = Head -> next;
    }
    return iCount;
}
void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)                       // LL is empty
    {
        return;
    }
    else if((*Head)-> next == NULL)         // LL contains only 1 node
    {
        free(*Head);
        *Head = NULL;
    }
    else                                    // LL contains more than one node
    {
        *Head = (*Head) -> next;
        free(temp);

    }
}
void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

if(*Head == NULL)
    {
        return;
    }
    else if(((*Head)-> next == NULL))
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }
        free(temp -> next);
        temp -> next = NULL;
    }
}

void InsertAtPos(PPNODE Head, int No, int iPos)
{
    int iLength = 0;
    iLength = Count(*Head);
    PNODE newn = NULL;
    PNODE temp = *Head;
    int iCnt= 0;

    if((iPos <1)||(iPos>iLength +1))
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
         newn = (PNODE)malloc(sizeof(NODE));    

    newn -> data = No;                      
    newn -> next = NULL;
    for(iCnt = 1; iCnt< iPos - 1; iCnt++)
    {
        temp = temp->next;
    }
    newn->next = temp->next;
    temp->next = newn;
        
    }
}
void DeleteAtPos(PPNODE Head, int iPos)
{
        int iLength = 0;
    iLength = Count(*Head);
    PNODE temp = *Head;
    PNODE tempX = NULL;
    int iCnt = 0;

    if((iPos <1)||(iPos>iLength))
    {
        printf("Invalid position \n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(Head);

    }
    else if(iPos == iLength)
    {
        DeleteLast(Head);

    }
    else
    {
        for(iCnt =1; iCnt< iPos -1; iCnt++)
        {
            temp = temp->next;
        }

        tempX = temp-> next;
        temp->next = temp->next->next;
        free(tempX);

    }
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertLast(&First, 11);
    InsertLast(&First, 21);
    InsertLast(&First, 51);
    InsertLast(&First, 101);
    
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are:%d \n", iRet);

    InsertFirst(&First, 10);
    InsertFirst(&First, 20);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are: %d\n", iRet);

    InsertAtPos(&First, 25, 5);// 25 is data and 5 is position
    Display(First);
     iRet = Count(First);
    printf("Number of nodes are: %d\n", iRet);

    DeleteAtPos(&First,5);
    Display(First);
     iRet = Count(First);
    printf("Number of nodes are: %d\n", iRet);

    DeleteFirst(&First);
    Display(First);
     DeleteFirst(&First);
    Display(First);

    iRet = Count (First);
    printf("Number of nodes are: %d \n", iRet);

    DeleteLast(&First);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d \n", iRet);
    return 0;
}