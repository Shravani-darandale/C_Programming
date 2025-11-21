/*
Input : iRow=3   iCol=5
Output: 
    A A A A A
    B B B B B 
    C C C C C
    
*/

#include<Stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0, j = 0;

    for(i=0; i<=iRow; i++)
    {
        for(j=1; j<=iCol; j++)
        { 
           printf(" %c ",'A' + i);
        }
         printf("\n");
           
    }
       
}


int main()
    { 
        int iValue1 = 0;
        int iValue2 = 0;

        printf("Enter number of rows and columns :");
        scanf("%d %d",&iValue1, &iValue2);

        Pattern(iValue1 , iValue2);
       
        return 0;
    }




                     