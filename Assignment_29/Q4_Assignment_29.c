//Accept character from user and check whether check it is small case or not(A-Z)

//Input: f
//Output: True

//Input : G
//Output: False

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSmall(char ch)
{
    int iCount = 0;
    while(ch != '\0')
    {
        if((ch >= 'a') && ( ch <= 'z'))
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

    bRet = CheckSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is small case character");
    }
    else
    {
        printf("It is not a Small case character ");
    }

    return 0;
}