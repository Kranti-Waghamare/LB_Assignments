//Accept amount in US dollar and return its corresponding value in indian currency. consider 1$ = 70Ruppes.
//Input : 10
//Output : 700

#include<stdio.h>

int DollerToINR(int iNo)
{
    if(iNo == 0)
    {
        return -1;
    }
    else
    {
       return iNo * 70;
    }


}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is : %d\n", iRet);

    return 0;
}

//Time Complexity : O(1)