//write a program which returns the difference between Even Factorial and Odd Factorial of given number.
//Input : 5
//Output : -7  (8 - 15)

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iMult1 = 1;
    int iMult2 = 1;
    int iDiff = 0;

    if(iNo == 0)
    {
        return 1;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iMult1 = iMult1 * iCnt;
        }
        else
        {
            iMult2 = iMult2 * iCnt;
        }
    }
    
    iDiff = iMult1 - iMult2;
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is : %d\n", iRet);

    return 0;
}

//Time Complexity : O(N)