/*
Write a program which accept 2 string from user and concat second string after first string(Implement strcat() function)

Input : "Marvellous multi OS"
        "Logic Building"

Output : Marvellous multi OS Logic Building
*/

#include<stdio.h>

void Strcat(char *src, char *dest)
{
    while(*src != '\0')
    {
       *src++;
    }

    while(*dest != '\0')
    {
        *src = *src + *dest;
        *src++;
        *dest++;
    }

    *src = '\0';

}

int main()
{
    char Arr[50] = "Marvellous multi OS";
    char Brr[30] = " Logic Building";

    Strcat(Arr, Brr);

    printf("%s",Arr);

    return 0;
}