/*
write a program which accept string from user and Display only digits from that string.

Input : "Marve89llous121 "
Output : 89121
*/

#include<stdio.h>

void DisplayDigit(char *str)
{
    int i = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            printf("%c",str[i]);
        }
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    DisplayDigit(Arr);

    return 0;
}