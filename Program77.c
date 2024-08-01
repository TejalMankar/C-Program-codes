// Even Addidtion of array elelments

#include<stdio.h>
#include<stdlib.h>

int OddAddition(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

     for(iCnt = 0; iCnt < iSize; iCnt++)
     {
        if((Arr[iCnt] % 2) !=0)
        {
            iSum = iSum + Arr[iCnt];
        }
     }
     return iSum;
}

int main()
{
    int iCount = 0; int iRet = 0;
    int * ptr = NULL;
    int iCnt = 0;

    printf("Enter the number od elements you want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic memory get successfully %d element",iCount);

    printf("\nEnter the %d values : ",iCount);

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\nEnter the elememts no %d: ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = OddAddition(ptr , iCount);

    printf("Addition of all Odd Numbers are : ",iRet);

    free(ptr);

    printf("Deallocate the memory sucessfully!!!");

    return 0;
}
