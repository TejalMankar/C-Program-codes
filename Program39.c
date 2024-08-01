// Enter the number of times you want to display on screen by ascending order.
#include<stdio.h>         //for printf and scanf header file

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of times you want to display on screen\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}