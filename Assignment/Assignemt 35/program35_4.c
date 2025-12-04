//program which accept string from user and check wheater it contain vowles or not

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVolwel(char * str)
{
  if(str == NULL)
    {
        return 0;
    }


   while(*str !='\0')
   {
     if((*str == 'a' || *str == 'e' || *str =='i' || *str == 'o' ||*str == 'u' ||
        *str == 'A' || *str == 'E' || *str =='I' || *str == 'O' ||*str == 'U'))
      
      {
        return TRUE;
      }
        str++;
   }
   return FALSE;    
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter String : ");
    scanf("%[^\n']s",arr);

    bRet = ChkVolwel(arr);
    if(bRet == TRUE)
    {
      printf("Contains Vowles....!");
    }
    else
     printf("There are no Vowles....!");

    
    return 0;
}
