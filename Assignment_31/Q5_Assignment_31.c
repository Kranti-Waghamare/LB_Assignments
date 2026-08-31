/*
write a program which accept string from user and Display it in Reverse order.

Input : "Marvellous"
Output : "suollevraM"

*/

#include<stdio.h>

void Reverse(char *str)
{
    char *start = NULL;

    start = str;

    while(*str != '\0')
    {
        str++;
    }

    str--;

    while(start <= str)
    {
        printf("%c",*str);
        str--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    Reverse(Arr);

    return 0;
}