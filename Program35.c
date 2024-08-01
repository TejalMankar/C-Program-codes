#include<stdio.h>         //for printf and scanf header file

void Display(int ino)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= ino; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number you want to display Jay Ganesh on screen\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}