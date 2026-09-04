/*
Write a program which accepts string from user and accept one character. check weather that character is present in string or not.

Input : Marvellous Multi os
        e
Output : True

Input : Marvellous Multi os
        w
Output : False
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char * str, char ch)
{
        int i = 0;

        for(i = 0; str[i] != '\0'; i++)
        {
                if(str[i] == ch)
                {
                        return TRUE;
                }
        }

        return FALSE;
        
}

int main()
{
        char Arr[20];
        char cValue = 0;
        BOOL bRet = FALSE;

        printf("Enter the string : ");
        scanf("%[^'\n']s", Arr);

        printf("Enter the character : ");
        scanf(" %c",&cValue);                  //Here space is imp before %c

        bRet = ChkChar(Arr, cValue);

        if(bRet == TRUE)
        {
                printf("Character found");
        }
        else
        {
                printf("Character not found");
        }

        return 0;

}