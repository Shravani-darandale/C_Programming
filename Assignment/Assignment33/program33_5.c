/*Accept division of student from user and depends on dividion display exam timing.there are 4 division in school as A B C D . Exam ofdivision  at 7AM, B at 8 30 ,C at 9 20 and D at 10 30AM
Input : c
Output : Your exam at 9 :20

Input : d
Output : your exam at 10:30
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char chDiv)
{
    if(chDiv>= 'a' && chDiv <= 'z')
    {
        chDiv = chDiv - 32;

    }
    switch(chDiv)
    {
        case 'A':
            printf("Your exam is at 7:00 AM\n");
            break;

        case 'B':
            printf("Your exam is at 8:30 AM\n");
            break;

        case 'C':
            printf("Your exam is at 9:20 AM\n");
            break;

        case 'D':
            printf("Your exam is at 10:30 AM\n");
            break;
    }
}

int main()
{
    char cValue = '\0';
   

    printf("Enter your division:");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}
