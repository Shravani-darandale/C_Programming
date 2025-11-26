/*
*  *  *  *  *  *
*  #  #  #  *  *
*  #  *  #  $  *
*  #  *  $  $  *
*  *  $  $  $  *
*  *  *  *  *  *
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
          
            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("* ");
            }
            
            else if((i >= 2 && i <= 3) && (j >= 2 && j <= 4))
            {
                printf("# ");
            }
        
            else if((i >= 4 && i <= 5) && (j >= 3 && j <= 5))
            {
                printf("$ ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

