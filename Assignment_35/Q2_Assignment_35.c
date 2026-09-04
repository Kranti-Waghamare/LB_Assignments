/*
Count Even Numbers
Count node containing even number

int CountEven(PPNODE first)
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | ->",first -> Data);
        first = first -> next;
    }
    printf("NULL\n");
    
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first -> next;
    }

    return iCount;
}

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE) malloc(sizeof (NODE));

    newn -> Data = iNo;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE) malloc(sizeof (NODE));

    newn -> Data = iNo;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
    }
}

void InsertAtPos(PPNODE first, int iNo, int iPos)
{
    int iCount = 0;
    int i = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;

    iCount = Count(*first);

    if((iPos < 1) || (iPos > iCount + 1))
    {
        printf("Invalid Position");
        return;
    }
    
    if(iPos == 1)
    {
        InsertFirst(first, iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(first, iNo);
    }
    else
    {
        newn = (PNODE) malloc(sizeof (NODE));

        newn -> Data = iNo;
        newn -> next = NULL;
        temp = *first;
        
        for(i = 0; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;
    }
}

int CountEven(PPNODE first)
{
    int iCount = 0;

    while(*first != NULL)
    {
        if(((*first) -> Data % 2) == 0)
        {
            iCount++;
        }
    
        *first = (*first) -> next;
    }

    return iCount;
   
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iResult = 0;

    InsertFirst(&Head, 56);
    InsertFirst(&Head, 22);
    InsertFirst(&Head, 11);

    InsertLast(&Head, 101);
    InsertLast(&Head, 112);

    InsertAtPos(&Head, 105, 4);

    Display(Head);

    iRet = Count(Head);

    printf("Number of elements are : %d\n",iRet);

    iResult = CountEven(&Head);

    printf("Even numbers are : %d\n",iResult);

    return 0;
}