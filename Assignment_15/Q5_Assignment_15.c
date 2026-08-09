/*
Accept N numbers from user and return product of all odd elements.
Input : N = 6
        Elememts : 15 66 3 70 10 88
Output : 45
*/

#include<stdio.h>
#include<stdlib.h>

int OddProduct(int Arr[], int iLength)
{
        int iCnt = 0;
        int iMult = 1;
        
        for(iCnt = 0; iCnt < iLength; iCnt++)
        {
                if(Arr[iCnt] % 2 != 0)
                {
                        iMult = iMult * Arr[iCnt];
                }
        }

        return iMult;
}

int main()
{
        int *p = NULL;
        int iSize = 0;
        int iCnt = 0;
        int iRet = 0;

        printf("Enter the number of elements : \n");
        scanf("%d", &iSize);

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

        iRet = OddProduct(p, iSize);

        printf("Product of odd numbers is : %d\n",iRet);

        free(p);
        return 0;
}