//write a program which accept the number from the user and display its table in reverse order.
//Input : 2
//Output : 20 18 16 14 12 10 8 6 4 2

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = 10; iCnt >= 1; iCnt-- )
    {
        printf("%d\n", iCnt * iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}

//Time Complexity : O(1)