//write a program to accept the range from user and return addition of all even numbers in between that range.
//Input : 23 30
//Output : 108

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;

    while(iStart <= iEnd)
    {
        if((iStart % 2 ) == 0)
        {
            iSum = iSum + iStart;
        }
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

    iRet = RangeSumEven(iValue1, iValue2);

    printf("%d\n", iRet);
    return 0;
}

//Time Complexity : O(N)