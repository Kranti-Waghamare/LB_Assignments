/*
Accept N numbers from user and accept one number as NO, and return index of first occurence of that NO.
Input : N = 6
        NO = 66
        Elements = 85 66 3 66 93 88
Output : 1

Input : N = 6
        NO = 12
        Elements = 85 11 3 11  93 11 
Output : -1
*/

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
        int iCnt = 0;
        
        for(iCnt = 0; iCnt < iLength; iCnt++)
        {
                if(Arr[iCnt] == iNo)
                {
                        return iCnt;
                }
        }
        return -1;
}

int main()
{
        int *p = NULL;
        int iSize = 0;
        int iCnt = 0;
        int iRet = 0;
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

        iRet = FirstOcc(p, iSize, iValue);

        printf("%d\n", iRet);

        free(p);
        return 0;
}