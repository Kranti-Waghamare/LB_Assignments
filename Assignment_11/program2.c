//write a program to accept the range from user and return all even numbers in between that range.
//Input :  23 35
//Output : 24 26 28 30 32 34

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    while(iStart <= iEnd)
    {
        if((iStart % 2 ) == 0)
        {
            printf("%d\n",iStart);
        }
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

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}

//Time Complexity : O(N)