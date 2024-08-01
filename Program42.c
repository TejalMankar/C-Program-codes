#include<stdio.h>         //for printf and scanf header file

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }   
}

int main()
{
    int iValue = 0;

    printf("Enter the number you want to display * on screen\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
