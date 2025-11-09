#include<stdio.h>
#include <stdbool.h>
bool DivisibleCheck(int iNo)
{
    if(( iNo% 5) == 0)
{
    return true;
}
 else
{
   return false;
}
}
int main()
{
   int iValue = 0;
   bool bRet = false;

   printf("Enter number");
   scanf("%d",& iValue);

   bRet = DivisibleCheck(iValue);
  
   if(bRet == true)
{
  printf("Divisible by 5");
}
  else
  {
   printf("Not Divisible by 5");

 return 0;

  }
}
