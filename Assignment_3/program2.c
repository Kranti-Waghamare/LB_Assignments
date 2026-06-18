//write a program which accept the number from user and print  factors of that number.
//Input : 24
//Output : 1 2 4 6 8 12 

#include<stdio.h>

int DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo/2; i++)
    {
        if((iNo % i) == 0)
        {
            printf("%d\t", i);
        } 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

   DisplayFactor(iValue);

    return 0;
}