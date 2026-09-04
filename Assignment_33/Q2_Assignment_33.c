/*
Write a program which accepts string from user and accept one character and return frequency of that character.

Input : Marvellous Multi os
        M
Output : 2

Input : Marvellous Multi os
        w
Output : 0
*/

#include<stdio.h>

int CountChar(char * str, char ch)
{
        int i = 0;
        int iCount = 0;

        for(i = 0; str[i] != '\0'; i++)
        {
                if(str[i] == ch)
                {
                        iCount++;       
                }
        }

        return iCount;
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

        iRet = CountChar(Arr, cValue);

        printf("Character frequency is : %d\n", iRet);

     
        return 0;

}