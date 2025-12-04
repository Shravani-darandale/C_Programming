//program which accept string from user and return difference between frequency og small character and frequency of capital charaters

#include <stdio.h>

int Difference(char * str)
{
   int iCnt = 0;
   int iCap = 0;
   int iSmall = 0;

   if(str == NULL)
    {
        return 0;
    }


   while(*str !='\0')
   {
     if(*str >= 'A' && *str <= 'Z')
     {
        iCap++;
     }
      
     else if(*str >= 'a' && *str <= 'z' )
     {
      iSmall++;
     }
     return iSmall - iCap;
   }



   return iCnt;     

}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}
