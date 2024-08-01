// Accept three numbers from the user and calculate its Largest value.
#include<stdio.h>

int Maximum (int iNo1, int iNo2, int iNo3)
{
    if((iNo1 >= iNo2) && (iNo1 >= iNo3))
    {
        return iNo1;
    }
    else if((iNo2 >= iNo1) && (iNo2 >= iNo3))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iValue3 = 0;
    int iRet = 0;

    printf("Enter fisrt Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    printf("Enter Third Number : \n");
    scanf("%d",&iValue3);

    iRet = Maximum(iValue1, iValue2, iValue3);

    printf("Largest Number is : %d\n",iRet);

    return 0;
}