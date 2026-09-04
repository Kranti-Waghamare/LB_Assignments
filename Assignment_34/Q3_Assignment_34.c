/*
Write a program which accept string from user and copy capital characters from that string into another string 

Input : "Marvellous Multi OS"

Output : MMOS
*/

#include<stdio.h>

void StrcpyCapital(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }

    *dest = '\0';

}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    StrcpyCapital(Arr, Brr);

    printf("%s",Brr);

    return 0;
}