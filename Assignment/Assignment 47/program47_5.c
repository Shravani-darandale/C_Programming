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

int CountPrime(PNODE first)
{
    int i = 0, flag = 0, iCnt = 0;

    while(first != NULL)
    {
        if(first->data > 1)
        {
            flag = 1;
            for(i = 2; i <= first->data / 2; i++)
            {
                if(first->data % i == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if(flag == 1)
            {
                iCnt++;
            }
        }
        first = first->next;
    }
    return iCnt;
    
       
    
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

    printf("\nCount of Prime Numbers: %d\n", CountPrime(head));
    
    return 0;
}
