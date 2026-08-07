/*
Accept N numbers from user and accept one number as NO, return frequency of NO from it.
Input : N = 6
        NO = 66
        Elements = 85 66 3 66 93 88
Output : 2

Input : N = 6
        NO = 12
        Elements = 85 11 3 11  93 11 
Output : 0
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCount = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
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
    int iValue = 0;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

    printf("Enter the number : \n");
    scanf("%d", &iValue);

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

    iRet = Frequency(p, iSize, iValue);

    printf("Result is : %d\n", iRet);

    free(p);

    return 0;
}