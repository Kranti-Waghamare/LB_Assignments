//write a program which accepts range from user and display all numbers in between all that range.
//Input : 23 35
//Output : 23 24 25 26 27 28 29 30 31 32 33 34 35

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    while(iStart <= iEnd)
    {
        printf("%d\n", iStart);
        iStart++;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the starting number : \n");
    scanf("%d", &iValue1);

    printf("Enter the ending number : \n");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}

//Time Complexity : O(N)