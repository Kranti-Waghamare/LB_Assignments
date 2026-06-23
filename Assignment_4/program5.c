//write a program which accepts the number from user and return difference between summation of all its factors and non factors.

//Input : 12
//Output : -34  (16 - 50)

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iDiff = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
           iSum1 = iSum1 + iCnt;
        }
        if((iNo % iCnt) != 0)
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    iDiff = iSum1 - iSum2;
    printf("%d\n", iDiff);
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    FactDiff(iValue);
    return 0;
}