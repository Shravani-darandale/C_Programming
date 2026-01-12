#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
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

void InsertLast(PPNODE first , int no)
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

void DeleteFirst(PPNODE first)
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
        *first = (*first)->next;
        free(temp);
    }
}

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

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d |->",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

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

void SumDigits(PNODE first)
{
    int no = 0;
    int Sum = 0;

    while(first != NULL)
    {
        no = first->data;
        Sum = 0;

        while(no != 0)
        {
            Sum = Sum + (no % 10);
            no = no/10;
        }

        printf("Sum of Digits in %d = %d\n", first->data, Sum);
        first = first->next;
    }
}

int main()
{
    PNODE first = NULL;

    PNODE head = NULL;

    InsertFirst(&head, 11);
    InsertFirst(&head, 21);
    InsertFirst(&head, 51);
    InsertFirst(&head, 75);
    InsertLast(&head, 101);



    printf("\nSum of Digits of Each Node:\n");
    SumDigits(head);
    return 0;
}
