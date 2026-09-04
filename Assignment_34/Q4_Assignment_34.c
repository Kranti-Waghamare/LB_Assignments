/*
Write a program which accept string from user and copy small characters from that string into another string 

Input : "Marvellous multi OS"

Output : arvellous multi
*/

#include<stdio.h>

void StrcpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
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
    char Arr[30] = "Marvellous multi OS";
    char Brr[30];

    StrcpySmall(Arr, Brr);

    printf("%s",Brr);

    return 0;
}