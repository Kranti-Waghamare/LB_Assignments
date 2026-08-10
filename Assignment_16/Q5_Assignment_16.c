/*
Accept N numbers from user and display Summation of digits of each number

Input : N = 6
        Elements : 8225 665 3 76 953 858
Output : 17     17  3   13  17  21

*/

#include<stdio.h>
#include<stdlib.h>

int SumDigits(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount = 0;
    int iNo = 0;    
    int iSum = 0;
    int iDigit = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + iDigit;

            iNo = iNo / 10;
        }
        printf("%d\n", iSum);
    }
    printf("\n");
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

    SumDigits(p, iSize);

    free(p);

    return 0;
}