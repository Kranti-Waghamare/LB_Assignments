//Write a program which accepts the number from user and  display its factors in decreasing order.

//Input : 12
//Output : 6 4 3 2 1

#include<stdio.h>

int FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = (iNo / 2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = FactRev(iValue);

    return 0;
}