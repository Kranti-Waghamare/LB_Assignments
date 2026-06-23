//write a program which accepts the number from user and display the non factors

//Input : 12
//Output : 5 7 8 9 10 11

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\n", iCnt);
        }
    }
}


int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    NonFact(iValue);
    
    return 0;
}