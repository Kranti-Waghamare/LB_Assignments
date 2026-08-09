/*
Accept N numbers from user and accept Range, Display all elements from that range.
Input : N = 6
        start = 60
        end = 90
        elements = 85 66 3 76 93 88

Output :  85 66 76 88

nput : N = 6
        start = 30
        end = 50
        elements = 85 66 3 76 93 88

Output : Nothing

*/

#include<stdio.h>
#include<stdlib.h>

int Range(int Arr[], int iLength, int iStart, int iEnd)
{
        int iCnt = 0;
        int iCount = 0;
        
        for(iCnt = 0; iCnt < iLength; iCnt++)
        {
                if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd ))
                {
                        printf("%d\n",Arr[iCnt]);
                }
        }
}

int main()
{
        int *p = NULL;
        int iSize = 0;
        int iCnt = 0;
        int iValue1 = 0;
        int iValue2 = 0;

        printf("Enter the number of elements : \n");
        scanf("%d", &iSize);

        printf("Enter the Start number : \n");
        scanf("%d", &iValue1);

        printf("Enter the end number : \n");
        scanf("%d", &iValue2);

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

        Range(p, iSize, iValue1, iValue2);

        free(p);
        return 0;
}