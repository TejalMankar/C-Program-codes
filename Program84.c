#include<stdio.h>
#include<Stdlib.h> 

int Frequency
(int Arr[], int iSize, int iNo)
{
    int iCnt = 0; 
    int iFrequency = Arr[0];
   
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
        return iFrequency;
    }
}

int main()
{
    int iCount = 0; int iValue =0;
    int *ptr = NULL;
    int iCnt = 0;
    float iRet = 0;

    printf("Enter numbers os elements ypu want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic memeory gets allocated successfully!!");

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iCount; iCnt++)
   
    {
        printf("\n Enter the number %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the number you want to search\n");
    scanf("%d",&iValue);

    iRet = Frequency(ptr, iCount);
    printf("%d occurs %d times\n",iValue , iRet);

    free(ptr);

    printf("Deallocate the memory sucessfully!!!");

    return 0;
}