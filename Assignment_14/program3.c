/*
Accept N numbers from user and check wheather number contains 11 or not.
Input : N = 6
        Elements : 85 66 11 55 93 88
Output : 11 is present.

Input : N = 6
        Elements : 85 66 3 55 93 88
Output : 11 is absent.

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 2

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
        }
    }

    return FALSE;
}


int main()
{
    int *p = NULL;
    int iCnt = 0;
    int iSize = 0;
    BOOL bRet = 0;

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

    bRet = Check(p, iSize);
    
    if(bRet == TRUE)
    {
        printf("11 is present\n");
    }
    else 
    {
        printf("11 is not present\n");
    }

    return 0;
}