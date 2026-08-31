/*
write a program which accept string from user and toggle case.

Input : "Marvellous Multi OS"
Output : "mARVELLOUS mULTI os"

*/

#include<stdio.h>

void Strtogglex(char *str)
{
    int i = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    Strtogglex(Arr);

    printf("Modified String is %s", Arr);

    return 0;
}