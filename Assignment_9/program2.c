//write a program which accept the number from user and return the count of odd numbers.
//Input : 2395
//Output : 3

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 2;
        if((iDigit % 2) != 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);

    printf("Odd numbers are : %d\n",iRet);

    return 0;
}

//Time Complexity : O(N)