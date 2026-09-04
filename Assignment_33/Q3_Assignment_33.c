/*
Write a program which accepts string from user and accept one character and return index of first occurance of that character.

Input : Marvellous Multi os
        M
Output : 0

Input : Marvellous Multi os
        w
Output : -1

Input : Marvellous Multi os
        e
Output : 4
*/

#include<stdio.h>

int FirstOccurChar(char * str, char ch)
{
        int i = 0;

        for(i = 0; str[i] != '\0'; i++)
        {
                if(str[i] == ch)
                {
                        return i;
                }
                return -1;
        }

}

int main()
{
        char Arr[20];
        char cValue = 0;
        int iRet = 0;

        printf("Enter the string : ");
        scanf("%[^'\n']s", Arr);

        printf("Enter the character : ");
        scanf(" %c",&cValue);                  //Here space is imp before %c

        iRet = FirstOccurChar(Arr, cValue);

        printf("Character Location is : %d\n", iRet);

     
        return 0;

}