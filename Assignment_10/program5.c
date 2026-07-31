//write a program which accepts the area in square feet and conver it into square meter. (1 square feet = 0.0929 square meter)
//Input : 5
//Output : 0.464515

#include<stdio.h>

double SquareMeter(int iNo)
{
    double dAns = 0.0;

    dAns = iNo * 0.0929;

    return dAns;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Coversion of squarefeet to squaremeter is : %lf\n", dRet);

    return 0;
}

//Time Complexity : O(1)