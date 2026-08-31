/*
write a program which accept string from user and return difference between frequency of
small characters and frequency ofcapital charachters.

Input : "MarvellouS"
Output : 6  (8 - 2)
*/

#include<stdio.h>

int Difference(char *str)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    int iDiff = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt1++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCnt2++;
        }

        *str++;
    }

    iDiff = iCnt1 - iCnt2;
    return iDiff;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    iRet = Difference(Arr);

    printf("%d\n", iRet);

    return 0;
}