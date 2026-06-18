//program to display 5 to 1 numbers on the screen

#include<stdio.h>

int Display()
{
    int i = 0;

    i = 5;

    while( i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
}

int main()
{
    Display();
    return 0;
}