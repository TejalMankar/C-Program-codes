// Enter the number of times you want to display NUMBERS on screen by descenting order.
#include<stdio.h>         //for printf and scanf header file

void Display(int iNo)
{
    int iCnt = 0;

    //      1           2           3
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {       
        printf("%d\n",iCnt);  //4
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number you want to display Hello on screen\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}