// Problem Statement : Accept radius from user and calculate the area of circle 

// Step1: Understand the problem statement
// Conclusion : We are going to use formula pi*r*r

// Step2 : Algorithm

/*
    Start
        Accpet radius from the user named as Radius
        Create variable of pi and store value 3.14
        Calculate the Area = pi*r*r

    Stop
*/

//Step3 : Write the program

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// Function Name : CalculateArea 
//  Description :  It is used to calculate are of circle
//  Input :        Float
//  Output :       Float
//  Auther name :  Tejal Ganpat Mankar
//  Date :         02/10/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define PI 3.14

float CalculateArea(float fValue)
{
    auto float fAns = 0.0f;

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

    printf("Area of the circle :%f/n",fArea);

    return 0;
}