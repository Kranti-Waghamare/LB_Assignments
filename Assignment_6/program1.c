//write a program which accepts the number from user and if no < 50 then print small, if no>50 and no<100 then print medium and if no>100 then print large.
//Input : 75
//Output : Medium

#include<stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Small");
    }
    else if((iNo > 50) && (iNo <= 100))
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}


//Time complexity : O(1)