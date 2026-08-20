/*
Accept character from user and check wheather it is special symbol or not(!, @,#,$,%,^,&,*)

Input : %
Output : True

Input : d
Output : False

*/

#define TRUE 1
#define FALSE 0

typedef int BOOL;

#include<stdio.h>
#include<ctype.h>

BOOL ChkSpecial(char ch)
{
    if(! isalpha(ch) && ! isdigit(ch))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : \n");
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special character.");
    }
    else
    {
        printf("It is not special character");
    }

    return 0;
}