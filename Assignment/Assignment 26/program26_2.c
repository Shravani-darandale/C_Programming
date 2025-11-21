//Input : 5
//Output : 5 # 4 # 3 # 2 # 1 #

#include<stdio.h>

void pattern(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        {
            printf(" %d  #", iCnt);
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