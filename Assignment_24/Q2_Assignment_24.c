/*accept number of rows and columns from user and display below pattern.
Input : iRow = 4, iCol = 4
Output : A  B   C   D
         a  b   c   d
         A  B   C   D
         a  b   c   d
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    for(i= 1; i <= iRow; i++)
    {
        for(j = 0, ch = 'A'; j <= iCol; j++, ch++)
        {
            if(i % 2 == 0)
            {
                printf("%C\t", 'A' + j);
            }
            else
            {
                printf("%C\t", 'a' + j);
            }
            
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows and columns : \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}