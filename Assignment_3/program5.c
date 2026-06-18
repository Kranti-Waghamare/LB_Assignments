//Accept one charachter from user and check whether that character is vowel (a,e,i,o,u) or not
//Input : E   Output : TRUE
//Input : D   Output : FALSE

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char cValue)
{
    if(cValue == 'A' || 'E' ||'I' || 'O' || 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char CValue = '\0';
    BOOL bChar = FALSE;

    printf("Enter the character\n");
    scanf("%c", &CValue);

    bChar = CheckVowel(CValue);

    if(bChar == TRUE)
    {
        printf("It is vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }


    return 0;
}