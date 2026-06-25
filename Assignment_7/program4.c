//write a program to find a odd factorial of a given number.
//Input : 5
//Output : 15  (5 * 3 * 1)

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

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
        if((iCnt % 2) != 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial of number is : %d\n", iRet);

    return 0;
}

//Time Complexity : O(N)