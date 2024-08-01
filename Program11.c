
// Problem Statement : Accept radius from user and calculate the area of circle 
#include<stdio.h>

float CalculateArea(float fValue)
{
    auto float fAns = 0.0f;
    auto const float PI = 3.14;
    fAns = PI * fValue * fValue;
    return fAns;

}
int main()
{
    auto float fRadius = 0.0f;
    auto float fArea = 0.0f;
   
    printf("Radius of the cicle is : \n");
    scanf("%f/n",&fRadius);

    fArea = CalculateArea(fRadius);

    printf("Area of the circle : %f/n",fArea);

    return 0;
}