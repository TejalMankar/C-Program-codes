// Perfect Number

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
                         
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
         if((iCnt % iNo) == 0)   
        {
           iSum = iSum + iCnt;
        }

        if((iNo = iCnt) ==0)  
        {
           return 1;
        }
        else
        {
            return 0;
        }

    }
}

int main()
{   
    int iValue = 0;
    bool bRet = false; 
     

    printf("Enter the number : \n");
    scanf("%d",&iValue);
    
    bRet = CheckPerfect(iValue);

    if(bRet = true)
    {
         printf(" %d is a Perfect Number\n",iValue);

    }
    else
    {
        printf(" %d is a not Perfect Number\n",iValue); 
    }

    return 0;
}