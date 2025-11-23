/*
a b c d e
1 2 3 4 5
a b c d e
1 2 3 4 5
a b c d e
*/

#include <stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 1)    
        {
            char ch = 'a';

            for(j = 1; j <= iCol; j++)
            {
                printf("%c ", ch);
                ch++;
            }
        }
        else              

        {
            int iCount = 1;

            for(j = 1; j <= iCol; j++)
            {
                printf("%d ", iCount);
                iCount++;
            }
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
