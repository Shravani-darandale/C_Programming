/*
Input : iRow = 4   iCol = 4
* * * * 
* * *
* * 
*         

*/

#include <stdio.h>

void Pattern(int iRow , int iCol)
{

    {
       int i = 0,j = 0 ;
       if(iRow != iCol)
       {
        printf("Invalid Input");
        printf("Row number and column number should be same");

        return;
       }
    }
    
       int i = 0, j = 0;
    

    for(i = 1; i <= iRow; i++)
      
    {
        for(int j = 1; j <= iCol - i + 1; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d", &iValue1);

    printf("Enter number of columns : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
