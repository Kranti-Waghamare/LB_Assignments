//write a program which accept the number from user and display its table.
//Input : 2
//Output : 2 4 6 8 10 12 14 16 18 20

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\n", iCnt * iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}

//Time complexity : O(1)