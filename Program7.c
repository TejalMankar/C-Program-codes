// Problem Statement : Accpets 2 Values from user and perform the addition.

// Step 1 : Understand the problem statement.
// Concludion : We have to accpets integers and perform addition.

// Step 2 : write the Alogorithm

/*
    START
    Accepts first number from user and store it into at no1
    Accepts second number from user and store it into at no2
    Create the variable to store result as named Ans
    Perform Addition of no1 and no2, and store the result at Ans
    Display the result from Ans to the user

    STOP
*/

// Step 3 : Select the programming language (c/c++/JAVA/Python)
// We select c programming

// Step 4 : Write the program


#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Addition.
// Description : It is used to perform addition of two integer.
// Input arguement : Integer , Ineteger.
// output : Integer.
// Author : Tejal Ganpat Mankar.
// Date : 25/09/2023. Update (Date)
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Addition (int ino1, int ino2)  //// Addition is a function which accpets 2 parameters which is interger and it return integer
{
    int iSum = 0;               // Variable to store the value of Addition.

    iSum = ino1 +ino2;
    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry point function of an application which performd addition of 2 integer.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int ivalue1 = 0;   //Variable to store 1st input
    int ivalue2 = 0;    // Variable to store 2nd input
    int iAns = 0;       // Variable to store result

    printf("Enter first Number :\n");
    scanf("%d",&ivalue1);

    printf("Enter Second Number :\n");
    scanf("%d",&ivalue2);

    iAns = Addition(ivalue1, ivalue2);    // Function call to perform Addition 

    printf("Addition is : %d\n",iAns);

    return 0;
}


// Step 5 :
// Test case 1 
// input 10 11 
//Output 21