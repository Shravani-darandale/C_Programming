//Input : 8
//Output :2 4 6 8 10 12 14 16 

#include<stdio.h>

void pattern(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        {
            printf(" %d ",iCnt * 2);
        }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number of elements :");
    scanf("%d", &iValue);

    pattern(iValue);

    return 0;

}