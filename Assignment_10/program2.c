//write a program which accepts the width and height of rectangle from user and calculate its area.(area = width * height)

//Input : 5.3 9.78
//Output : 51.834

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter the first number : \n");
    scanf("%f", &fValue1);

    printf("Enter the second number : \n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangel is : %f\n", dRet);

    return 0;
}

//Time Complexity : O(1)