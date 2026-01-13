////////////////////////////////////////////////////////////////////////
//
//  File Name:     program49_5.c
//  Description:   Singly Linear Linked List program to
//                 check whether all elements are positive
//  Author:        Shravani Kishor Darandale
//  Date:          13/01/2026
//
////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
//  Structure Definition
//  Description:   Structure for Singly Linear Linked List node
//
////////////////////////////////////////////////////////////////////////

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


////////////////////////////////////////////////////////////////////////
//
//  Function Name: InsertFirst
//  Description:   Inserts new node at the beginning of the linked list
//  Input:         Address of first node, Integer value
//  Output:        Updated linked list
//
////////////////////////////////////////////////////////////////////////


void InsertFirst(PPNODE first,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }

    else
    {
        newn->next = *first;
        *first = newn;
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Function Name: InsertLast
//  Description:   Inserts new node at the end of the linked list
//  Input:         Address of first node, Integer value
//  Output:        Updated linked list
//
////////////////////////////////////////////////////////////////////////

void InsertLast(PPNODE first, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = NULL;

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
       temp = *first;
       while(temp->next != NULL)
       {
         temp = temp->next;
       }
       temp->next = newn;
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Function Name: DeleteFirst
//  Description:   Deletes first node of the linked list
//  Input:         Address of first node
//  Output:        Updated linked list
//
////////////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE first)
{
    PNODE temp= NULL;

    if(*first == NULL)
    {
       return;
    }
    else if ((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;
        *first = (*first)->next;
        free(temp);
    }
    
}

////////////////////////////////////////////////////////////////////////
//
//  Function Name: DeleteLast
//  Description:   Deletes last node of the linked list
//  Input:         Address of first node
//  Output:        Updated linked list
//
////////////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if ((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description:   Displays all elements of the linked list
//  Input:         First node of linked list
//  Output:        Printed linked list
//
////////////////////////////////////////////////////////////////////////

void Display(PNODE first)
{
     while(first != NULL)
    {
        printf("| %d |->",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

////////////////////////////////////////////////////////////////////////
//
//  Function Name: Count
//  Description:   Counts number of nodes in the linked list
//  Input:         First node of linked list
//  Output:        Number of nodes
//
////////////////////////////////////////////////////////////////////////

int Count(PNODE first)
{
   int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }

    return iCount;
}

////////////////////////////////////////////////////////////////////////
//
//  Function Name: CountTwoDigits
//  Description:   Counts two digit numbers in linked list
//  Input:         First node of linked list
//  Output:        Integer count
//
////////////////////////////////////////////////////////////////////////


int CountTwoDigit(PNODE Head)
{
    int iCnt = 0;

   while (Head != NULL)
    {
        if ((Head->data >= 10 && Head->data <= 99)||
            (Head->data >= -10 && Head->data <= -99))
        {
            iCnt++;
        }
        Head = Head->next;
    }
    return iCnt;
}

////////////////////////////////////////////////////////////////////////
//
//  Function Name: main
//  Description:   Entry point of program
//
////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 11);
    InsertFirst(&First, 21);
    InsertFirst(&First, 51);
    InsertFirst(&First, 5);
    InsertFirst(&First, 40);

    Display(First);
    iRet = CountTwoDigit(First);
    
    printf("Count of two digit number is :%d\n",iRet);
   


    return 0;
}
////////////////////////////////////////////////////////////////////////
//
//  End of Program
//
////////////////////////////////////////////////////////////////////////