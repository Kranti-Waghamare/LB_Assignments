/*
Accept N numbers from user and return frequency of 11 from it.
Input : N = 6
        Elements : 85 66 3 55 93 88
Output : 0

Input : N = 6
        Elements : 85 66 11 55 11 11 
Output : 3

*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCount = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
    }

    return iCount++;
}

int main()
{
    int *p = NULL;
    int iCnt = 0;
    int iSize = 0;
    int iRet = 0;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

    p = (int *)malloc(sizeof(int) * iSize);

    if(p == NULL)
    {
        printf("Unable to allocate the memory \n");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize);

    printf("Result is : %d\n", iRet);

    free(p);

    return 0;
}