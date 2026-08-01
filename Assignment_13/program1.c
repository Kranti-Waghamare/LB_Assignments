//Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
//Input : N = 6
        //Elements : 85 66 3 80 95 88
//Output : 53  (234 - 181)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iSum1 = 0;
    int iSum2 = 0;
    int iCnt = 0;
    int iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSum1 = iSum1 + Arr[iCnt];
        }
        else
        {
            iSum2 = iSum2 + Arr[iCnt];
        }
    }

    iDiff = iSum1 - iSum2;

    return iDiff;
}

int main()
{
    int *p = NULL;
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory. \n");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);

    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Result is : %d\n", iRet);

    free(p);

    return 0;
}