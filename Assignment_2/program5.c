//Accept number from user and check wheather number is even or odd

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEven(int iNo)
{
    if((iNo % 2) == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    if(bRet == TRUE)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is odd\n");
    }

    return 0;
}