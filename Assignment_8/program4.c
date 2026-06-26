//write a program which accepts the temperature in fahrenheit and covert it into celcius.(1 celcius = (fahrenheit - 32) * (5/9))

//Input : 10
//Output : -12.2222 ( (10 - 32) * (5.0/9.0))
#include<stdio.h>

double FhtoCS(float fTemp)
{
    double dAns = 0.0;

    dAns = ((fTemp - 32) * (5.0/9.0));

    return dAns;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the number : \n");
    scanf("%f",&fValue);

    dRet = FhtoCS(fValue);

    printf("conversion of Fahrenheit to celcius is : %f\n", dRet);

    return 0;
}

//Time Complexity : O(1)