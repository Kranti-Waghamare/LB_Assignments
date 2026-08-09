/*
Accept N numbers from user and accept one number as NO, and Check wheather NO is present or not.
Input : N = 6
        NO = 66
        Elements = 85 66 3 66 93 88
Output : TRUE

Input : N = 6
        NO = 12
        Elements = 85 11 3 11  93 11 
Output : FALSE
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 2

typedef int BOOL;

int Check(int Arr[], int iLength, int iNo)
{
        int iCnt = 0;
        
        for(iCnt = 0; iCnt < iLength; iCnt++)
        {
                if(Arr[iCnt] == iNo)
                {
                        return TRUE;
                }
        }

        return FALSE;
}

int main()
{
        int *p = NULL;
        int iSize = 0;
        int iCnt = 0;
        BOOL bRet = 0;
        int iValue = 0;

        printf("Enter the number of elements : \n");
        scanf("%d", &iSize);

        printf("Enter the number : \n");
        scanf("%d", &iValue);

        p = (int *)malloc(sizeof(int) * iSize);

        if(p == NULL)
        {
                printf("Unable to allocate the memory\n");
                return -1;
        }

        printf("Enter the %d elments : \n", iSize);

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
                scanf("%d", &p[iCnt]);
        }

        bRet = Check(p, iSize, iValue);

        if(bRet == TRUE)
        {
                printf("The number is present\n");
        }
        else
        {
                printf("The number is absent\n");
        }

        free(p);
        return 0;
}