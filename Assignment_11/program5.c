//write a program which accepts the range from user and display all the numbers in between that range in the reverse manner.
//Input : 23 35 
//Output : 35 34 33 32 31 30 29 28 27 26 25 24 23

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    for( ;iEnd >= iStart; iEnd-- )
    {
        printf("%d\n", iEnd);
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

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}

//Time Complexity : O(N)