//Accept one charachter from user and convert that case of that character.
//Input : a      Output: A
//Input : A      output: a

#include <stdio.h>
#include <ctype.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", toupper(cValue));           //toupper method to do the lowercase to uppercase from ctype header file
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", tolower(cValue));          //t metholowerod to do the uppercase to lowecase from ctype header file
    }
}

int main()
{
    char CValue = '\0';

    printf("Enter the Character\n");
    scanf("%c", &CValue);

    DisplayConvert(CValue);

    return 0;
}