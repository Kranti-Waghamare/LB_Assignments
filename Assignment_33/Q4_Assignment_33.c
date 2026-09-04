/*
Write a program which accepts string from user and accept one character and return index of Last occurance of that character.

Input : Marvellous Multi os
        M
Output : 11

Input : Marvellous Multi os
        w
Output : -1

Input : Marvellous Multi os
        e
Output : 4
*/

#include<stdio.h>

int LastOccurChar(char * str, char ch)
{
        int i = 0;
        int iLast = -1;

        for(i = 0; str[i] != '\0'; i++)
        {
                if(str[i] == ch)
                {
                        iLast = i;
                }
        }
        
        return iLast;

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

        iRet = LastOccurChar(Arr, cValue);

        printf("Character Location is : %d\n", iRet);

     
        return 0;

}