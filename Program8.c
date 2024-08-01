// Problem Statement : Accept radius from user and calculate the area of circle 

// Step1: Understand the problem statement
// Conclusion : We are going to use formula as PI*R*R

// Step2 : Algorithm
/*
    Start
        Accpet radius from the user store it into Radius
        Create variable of PI and store value 3.14
        Calculate the area = PI * R * R
        Display the value of Area to the user

    Stop
*/

//Step3 : Write the program

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name : CalculateArea 
// Description : IT is used to calculate the area of circle
//  Input : float
//  Output : float
//  Auther Name : Tejal Ganpat Mankar
//  Date : 02/10/2023
//
//////////////////////////////////////////////////////////////////////////////////////

float CalculateArea(float fValue)
{
    auto float fAns = 0.0f;
    auto float PI = 3.14;

    fAns = PI * fValue * fValue;
    return fAns;
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry Point function
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    auto float fRadius = 0.0f;
    auto float fArea = 0.0f;
    
    printf("Enter the radius of the cicle is : \n");
    scanf("%f/n",&fRadius);

    fArea = CalculateArea(fRadius);

    printf("Area of the circle : %f/n");

    return 0;
}