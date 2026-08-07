//Accept N numbers from user and return difference between frequency of even numbers and odd numbers.
//Input : N = 7
        //Elements : 85 66 3 80 95 88 90
//Output : 1  (4 - 3)

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount1 = 0;
    int iCount2 = 0;
    int iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount1++;
        }
        else                                  //else if((Arr[iCnt] % 2) != 0)
        {
            iCount2++;
        }
    }

    iDiff = iCount1 - iCount2;

    return iDiff;

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