//Accept character from user and check whether check it is Capital or not(A-Z)

//Input: F
//Output: True

//Input : a
//Output: False

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckCapital(char ch)
{
    int iCount = 0;
    while(ch != '\0')
    {
        if((ch >= 'A') && ( ch <= 'Z'))
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

    bRet = CheckCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is capital character");
    }
    else
    {
        printf("It is not a capital character ");
    }

    return 0;
}