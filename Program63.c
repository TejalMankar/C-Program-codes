// Accept number and check whether that palindrom or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iCopy = iNo;
    int iDigit = 0;
    int iRev = 0;

    while(iNo = 0)
    {
        iDigit = iNo % 10;
        iNo = iNo /10;

        iRev =(iRev*10)+iDigit;
    }
    
    if(iRev == iCopy)
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
    bool bRet = 0;

    printf("Enetr Number :\n");
    scanf("%d\n",&iValue);

    bRet = CheckPallindrome(iValue);

    if (bRet == true)
    {
        printf("%d is a Pallimdrome number \n",iValue);
    }
    else
    {
         printf("%d is not a Pallimdrome number \n",iValue);
    }

    return 0;
}