/*
1  2  3  4  5
1     2     5
1     3     5
1  2  3  4  5

*/
#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol+1; j++)   
        {
           
            if(i == 1 || i == iRow)
            {
                printf("%d ", j);
            }
            
            else if(j == 1)
            {
                printf("1 ");
            }
           
            else if(j == iCol+1)
            {
                printf("5 ");
            }
           
            else if(j == i)
            {
                printf("%d ", i);
            }
            else
            {
                printf("  "); 
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

