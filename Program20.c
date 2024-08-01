#include<stdio.h>

//  Logical OR  || -> If any of the condition is TRUE then it enters inside the if 
//  Logical AND  && -> If all of the conditions are TRUE then it enters inside the if 

void Displayclass(float fMarks)
{
    if ((fMarks < 0.00) || (fMarks > 100.00))  //Filter
    {
        printf("Invalid Marks...\n");
    }
    
    if ((fMarks <= 0.0) && (fMarks < 35.00))
    {
        printf("You are Fail..\n");
    }
    else if ((fMarks >= 35.00) && (fMarks < 50.00))
    {
        printf("Your class is Pass class...\n");
    }
    else if ((fMarks >= 50.00) && (fMarks < 60.00))
    {
        printf("Your class is Second Class... \n");
    }
    else if ((fMarks >= 60.00) && (fMarks < 75.00))
    {
        printf("Your class is First class... \n");
    }
    else if ((fMarks >= 70.00) && (fMarks < 100.00))
    {
        printf("Your class is First Class Distinction.... \n");
    }
}

int main()
{
    auto float fValue = 0.0f;

    printf("Enter your percentage: \n");
    scanf("%f",&fValue);

    Displayclass(fValue);

    return 0; 
}