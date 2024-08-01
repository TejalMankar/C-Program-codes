#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    printf("Factors of %d are : \n",iNo);
                         
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)   
        {
           iSum = iSum + iCnt;
        }
    }
}

int main()
{   
    int iValue = 0;
    int iRet = 0; 

    printf("Enter the number : \n");
    scanf("%d",&iValue);
    iRet = SumFactors(iValue);

    printf("Sum of Factors are : %d\n"iRet);

    return 0;
}