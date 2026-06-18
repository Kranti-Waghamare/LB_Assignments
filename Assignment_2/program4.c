//Accept two number from user and display the first number in second number of 

//Input : 12 5
//Output : 12 12 12 12 12

//Input : -2 3
//Output : -2 -2 -2

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    
    //write updator
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\n", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    printf("Enter the Frequency\n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}