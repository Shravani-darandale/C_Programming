//Accept character from user abd display its ASCII value iin decimal octal and hexadecimal format

#include <stdio.h>

void Display(char ch)
{
    printf("Decimal  : %d\n",ch);
    printf("Octal  : %o\n",ch);
    printf("Hexadecimal  : %x\n",ch);
    
}

int main()
{
    char cValue = '\0';

    printf("Enter character :");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
