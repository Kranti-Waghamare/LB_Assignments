//write a program which accepts the number from user and return difference between summation of even digits and summation of odd digits.
//Input : 2395
//Output : -15   (2 - 17)

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iSum1 = iSum1 + iDigit;
        }
        else
        {
            iSum2 = iSum2 + iDigit;
        }
        iNo = iNo / 10;
    }
    iDiff = iSum1 - iSum2;
    return iDiff;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d\n",iRet);

    return 0;
}

//Time Complexity : O(N)