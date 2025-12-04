#include <stdio.h>

void Reverse(char *str)
{
    int iStart = 0, iEnd = 0;
    char temp;

    if (str == NULL)
    {
        return;
    }

 
    while (str[iEnd] != '\0')
    {
        iEnd++;
    }
    iEnd--; 


    while (iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char arr[20];

    printf("Enter String : ");
    scanf("%[^\n]s", arr);

    Reverse(arr);

    printf("Reversed String : %s\n", arr);

    return 0;
}
