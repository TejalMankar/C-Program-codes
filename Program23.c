// Accpet two numbers from the user and compare the largest Number.
#include<stdio.h>

int Maximum(int iNo1, int iNo2)
{
    if (iNo1 > iNo2)
    {
        return iNo1;
    }
    else 
    {
        return iNo2;
    }
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto  int iRet = 0;

    printf("Enter first Number : \n");
    scanf("%d",&iValue1);

    printf("Enter second Number : \n");
    scanf("%d",&iValue2);

    iRet = Maximum(iValue1, iValue2);

    printf("Largest Number is : %d\n",iRet);

    return 0;
}