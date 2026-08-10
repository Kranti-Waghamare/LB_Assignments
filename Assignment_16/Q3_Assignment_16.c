/*
Accept N numbers from user and return the difference between largest and smallest number.
Input : N = 6
        Elements : 85 66 3 66 93 88 
output : 90 (93 - 3)
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = 0;
    int iMax = 0;
    int iDiff = 0;

    iMin = Arr[0];
    iMax = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        else if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    iDiff = iMax - iMin;

    return iDiff;
}


int main()
{
    int *p = NULL;
    int iCnt = 0;
    int iRet = 0;
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

    iRet = Difference(p, iSize);

    printf("%d\n", iRet);

    return 0;
}