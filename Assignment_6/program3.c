//write a program to find a factorial of the number.
//Input : 5
//Output : 120  (5 * 4 * 3 * 2 * 1)

#include<stdio.h>

int Factorial(int iNo)
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
       iMult = iMult * iCnt;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of a number is : %d\n", iRet);

    return 0;
}

//Time Complexity : O(N)