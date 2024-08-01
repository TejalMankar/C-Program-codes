/*
    START
        Accept the number from user
        Divide that number by 2
        if the remainder is 0 display the number is even
        otherwiese display odd
    STOP
*/

#include<stdio.h>
#include<stdbool.h>

int CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    if
    
    (bRet == true)
    {
        printf("%d is an Even number\n",iValue);
    }
    else
    {
        printf("%d is an Odd Number\n",iValue);
    }

    return 0;
}