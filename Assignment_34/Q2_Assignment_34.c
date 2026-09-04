/*
Write a program which accept string from user and copy the contents of that string into another string.(Implement strcpy() function)

Input : "Marvellous Multi OS"
         10

Output : Marvellous

Note : If third parameter is greater than the size of source string then copy whole string into destination.
*/

#include<stdio.h>

void StrNcpyX(char *src, char *dest, int iCnt)
{
    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }

    *dest = '\0';

}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    StrNcpyX(Arr, Brr, 10);

    printf("%s",Brr);

    return 0;
}