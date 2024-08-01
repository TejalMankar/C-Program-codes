// Problem Statement : Accpets 2 Values from user and perform the addition.

// Step 1 : Understand the problem statement.
// Concludion : We have to accpets integers and perform addition.

// Step 2 : write the Alogorithm

/*
    Start
    Accepts first number from user and store it into at no1
    Accepts second number from user and store it into at no2
    Create the variable to store result as named Ans
    Perform Addition of no1 and no2, and store the result at Ans
    Display the result

    Stop
*/

// Step 3 : Select the programming language (c, c++ or JAVA)

// Step 4 : Write the program


#include<stdio.h>

int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;
    int iAns = 0;

    printf("Enter first Number :\n");
    scanf("%d",&ivalue1);

    printf("Enter Second Number :\n");
    scanf("%d",&ivalue2);

    iAns = ivalue1 + ivalue2;

    printf("Addition is : %d\n",iAns);

    return 0;
}


// Step 5 :
// Test case 1 
// input 10 11 
//Output 21