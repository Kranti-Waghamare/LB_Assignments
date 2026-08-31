/*
write a program which accept string from user and check wheather it contains vowel in it or not.

Input : "Marvellous"
Output : True

Input : "XYZ"
Output : False
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CountVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'e' && *str <= 'i' && *str <= 'o' && *str <= 'u')
        {
            return TRUE;
        }

        *str++;
    }

    return FALSE;
}

int main()
{
    char Arr[20];
    BOOL bRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    bRet = CountVowel(Arr);

    if(bRet == TRUE)
    {
        printf("Vowel is present\n");
    }
    else
    {
        printf("Vowel is not present\n");
    }

    return 0;
}