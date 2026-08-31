/*
write a program which accept string from user and Count number of white spaces.

Input : "Marvellous Multi OS"
Output : 2
*/

#include<stdio.h>

int  CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountWhite(Arr);

    printf("%d\n", iRet);

    return 0;
}