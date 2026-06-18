//Accept one charachter from user and convert that case of that character.
//Input : a      Output: A
//Input : A      output: a

#include <stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", cValue - 32);       //32 because inside ASCII value there is difference between in uppercase and lowercase is 32 
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", cValue + 32);       //32 because inside ASCII value there is difference between in uppercase and lowercase is 32 
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