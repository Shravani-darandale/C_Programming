/*Accept character from users and check wheather it is digit or not
Input : F
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
    if(ch >= 'A' && ch <= 'Z') 
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
        printf("It is a capital letter\n");

    }
    else 
    {
        printf("It is not a capital letter\n");

    }

    return 0;
}
