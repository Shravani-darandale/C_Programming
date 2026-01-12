//Singly Linear Linked List
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

int DisplayEvenPosition(PNODE first)
{
  int iCount = 0;
  int iPos = 1;
  
  while(first != NULL)
  {
    if((first->data) % 2 != 0) 
    {
        first->data = 0;
        iCount++;
    }
     first = first->next;
     iPos++;  
  }
  return iCount;
}
int main()
{

    PNODE head = NULL;
    int choice = 1;
    int value = 0;

    while(choice != 0)
    {
        printf("-------------------------------------------------------------------\n");
        printf("------------------Please select the option-------------------------\n");
        printf("1. Insert First\n");
        printf("2. Insert Last\n");
        printf("3. Delete First\n");
        printf("4. Delete Last\n");
        printf("5. Display\n");
        printf("6. Count\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                InsertFirst(&head, value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                InsertLast(&head, value);
                break;

            case 3:
                DeleteFirst(&head);
                break;

            case 4:
                DeleteLast(&head);
                break;

            case 5:
                Display(head);
                break;

            case 6:
                printf("Total nodes: %d\n", Count(head));
                break;

            case 0:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");

            return 0;
        }
    }
}