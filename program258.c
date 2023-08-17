#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct node *next;
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
    InsertFirst(&First,20);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are: %d\n", iRet);
    return 0;
}