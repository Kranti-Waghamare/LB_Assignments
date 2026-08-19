/*accept number of rows and columns from user and display below pattern.
Input : iRow = 5, iCol = 5
Output : a  b   c   d   e
         1  2   3   4   5
         a  b   c   d   e
         1  2   3   4   5
         a  b   c   d   e
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = 'a';

    for(i = 1; i <= iRow; i++)         //Important
    { 
        for(j = 1; j <= iCol; j++) 
        { 
            if(i % 2 == 0)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("%c\t",'a' + (j-1));
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