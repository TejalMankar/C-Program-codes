// Accpet two numbers from the user and compare the smallest Number.
#include<stdio.h>

int Minimum(int iNo1, int iNo2)
{
    if (iNo1 < iNo2)
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
    auto int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue1);

    printf("Enter the Number\n");
    scanf("%d",&iValue2);

    iRet = Minimum(iValue1, iValue2);

    printf("Smallest Number is : %d\n",iRet);

    return 0;
}