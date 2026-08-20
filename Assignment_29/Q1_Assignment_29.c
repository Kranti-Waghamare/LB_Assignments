//Accept character from user and check whether it is alphabet or not(A-Z  a-z)

//Input: F
//Output: True

//Input : &
//Output: False

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlpha(char ch)
{
    int iCount = 0;
    while(ch != '\0')
    {
        if((ch >= 'A' || ch >= 'a') && ( ch <= 'Z' || ch <= 'z'))
        {
            return TRUE;   
        }
        else
        {
            return FALSE;
        }
        iCount++; 
    }
    
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : \n");
    scanf("%c", &cValue);

    bRet = CheckAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is character");
    }
    else
    {
        printf("It is not a character ");
    }

    return 0;
}