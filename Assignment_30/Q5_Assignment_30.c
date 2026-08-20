/*
Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.

Input : A
Output : Decimal  65
         Octal  0101
         Hexadecimal 0X41

*/

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal value of %c is %d\n",ch,ch);
    printf("Octal value of %c is %#o\n",ch,ch);
    printf("Hexadecimal value of %c is %#X\n",ch,ch);

}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}