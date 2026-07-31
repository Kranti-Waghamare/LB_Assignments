//write a program which accepts range from user and return addition of all numbers in between that range.
//Input : 23 30 
//Output : 212

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iSum = 0;

    while(iStart <= iEnd)
    {
        iSum = iSum + iStart;
        iStart++;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the starting number : \n");
    scanf("%d", &iValue1);

    printf("Enter the ending number : \n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition of numbers in between range is : %d\n", iRet);

    return 0;
}

//Time Complexity : O(N)