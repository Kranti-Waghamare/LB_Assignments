//Accept character from user and check whether check it is digit or not(0-9)

//Input: 7
//Output: True

//Input : a
//Output: False

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckCapital(int iNo)
{
    int iCount = 0;
    while(iNo != 0)
    {
        if((iNo >= 0) && ( iNo <= 9))
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the character : \n");
    scanf("%d", &iValue);

    bRet = CheckCapital(iValue);

    if(bRet == TRUE)
    {
        printf("It is Digit ");
    }
    else
    {
        printf("It is not a Digit ");
    }

    return 0;
}