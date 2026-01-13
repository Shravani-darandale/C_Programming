////////////////////////////////////////////////////////////////////////
//
//  File Name:     program49_1.c
//  Description:   Singly Linear Linked List program to
//                 find Difference between Maximum and Minimum element
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
//  Function Name: Difference
//  Description:   Finds difference between maximum and minimum element
//  Input:         First node of linked list
//  Output:        Integer difference (Max - Min)
//
////////////////////////////////////////////////////////////////////////

int Difference(PNODE Head)
{
  int max,min;

  if( Head == NULL)
  {
    return 0;
  }
  max = Head->data;
  min = Head->data;

  while(Head != NULL )
  {
    if(Head->data > max)
    max = Head->data;

    if(Head->data < min)
    min = Head->data;

    Head = Head->next;
  }
  return(max - min);
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

    InsertFirst(&First, 10);
    InsertFirst(&First, 20);
    InsertFirst(&First, 30);
    InsertFirst(&First, 5);
    InsertFirst(&First, 40);

    iRet = Difference(First);

    printf("Difference between Max and Min is: %d\n", iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////////
//
//  End of Program
//
////////////////////////////////////////////////////////////////////////