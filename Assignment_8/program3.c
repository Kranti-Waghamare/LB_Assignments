//write a program which accepts distance in kilometer and convert it into meter. (1km = 1000m)

//Input : 5
//Output : 5000

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iAns = 0;

    iAns = iNo * 1000;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Conversion of KM to meter is : %d\n", iRet);
    
    return 0;
}

//Time Complexity : O(1)