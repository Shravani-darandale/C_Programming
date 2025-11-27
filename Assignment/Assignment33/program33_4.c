/*Accept character from users and check wheather it is small case or not
Input : g
Output : TRUE

Input : d
Output : FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if(ch >= 'a' && ch <= 'z') 
    {
        return TRUE;
    }

    else
    {
        return FALSE;

    }

}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character :");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is in small case\n");

    }
    else 
    {
        printf("It is in capital case\n");

    }

    return 0;
}
