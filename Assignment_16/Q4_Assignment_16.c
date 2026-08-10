/*
Accept N numbers from user and display all such numbers which contains 3 digits in it.

Input : N = 6
        Elements : 8225 665 3 76 953 858
Output : 665 953 858

*/

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount = 0;
    int iNo = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        iCount = 0;

        while(iNo != 0)
        {
            iCount++;

            iNo = iNo / 10;
        }

        if(iCount == 3)
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
}

int main()
{
    int *p = NULL;
    int iCnt = 0;
    int iSize = 0;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

    p = (int *)malloc(sizeof(int) * iSize);

    if(p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the %d elements : \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    Digits(p, iSize);

    free(p);

    return 0;
}