#include<stdio.h>

 long int Calculatecube(int iValue)
{
    long int icube = iValue * iValue * iValue;

    return icube;
}

int main()
{
    auto int iNo = 0;
    auto long int iAns = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iAns = Calculatecube(iNo);

    printf("Cube is : %d\n",iAns);

    return 0;
}