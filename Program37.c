#include<stdio.h>         //for printf and scanf header file

void Display()
{
    int iCnt = 0;

    //      1           2       3
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {   
        printf("Hello %d\n",iCnt);  //4
    }  
}

int main()
{
    Display();

    return 0;
}