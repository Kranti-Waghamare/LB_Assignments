//Accept division of student from user depends on the division display exam timing. There are 4 divisions in school as A, B, c,D .
//Exam of Division A at 7 AM, Exam of Division B at 8.30 AM, C at 9.20 AM and , D at 10.30 AM. (Application should be case insensitive)

//Input : C
//Output : Your exam at 9.20 AM

//Input : d
//Output : Your exam at 10.30 AM

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your Exam at 7 AM");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your Exam at 8.30 AM"); 
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your Exam at 9.20 AM");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your Exam at 10.30 AM");
    }
    else
    {
        printf("Enter the valid division");
    }

}

int main()
{
    char ch = '\0';
    BOOL bRet = FALSE;

    printf("Enter your division : \n");
    scanf("%c", &ch);

    DisplaySchedule(ch);

    return 0;
}