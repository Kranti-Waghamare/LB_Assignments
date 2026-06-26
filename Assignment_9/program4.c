//write a program which accepts number from user and return multiplication of all digits
//Input : 2395
//Output : 270

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 1;

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        iCount = iCount * iDigit;

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

    iRet = MultDigits(iValue);

    printf("%d\n",iRet);

    return 0;
}

//Time Complexity : O(N)