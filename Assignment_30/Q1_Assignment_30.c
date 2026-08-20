//write a program to display ASCII table. Table contains symbols, Decimal, Hexamdecimal and 
//octal representation of every member from 0 to 255.

#include<stdio.h>

void DisplayASCII()
{
    int iNo = 0;

    for(iNo = 0; iNo <= 255; iNo++)
    {
        printf("%c\t%d\t%X\t%o\n", iNo,iNo,iNo,iNo);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}