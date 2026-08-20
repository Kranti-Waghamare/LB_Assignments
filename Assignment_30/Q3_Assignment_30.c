//Accept character from user. If it is capital then display all the characters from the input characters till Z.
//if input character is small the print all the characters in reverse order till a. In other cases return directly. 

//Input : Q
//Output : Q R S T U V W X Y Z

//Input : m
//Output : m l k j i h g f e d c b a  

//Input : 8
//Output : 8

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        while(ch <= 'Z')
        {
        printf("%c\t",ch);
        ch++;
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        while(ch >= 'a')
        {
            printf("%c\t",ch);
            ch--;
        }
    }
    else
    {
        return;
    }
    
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}