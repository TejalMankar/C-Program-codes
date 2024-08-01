#include<stdio.h>
#include<Stdlib.h> 

float Average(int Arr[], int iSize)
{
    int iCnt = 0; int iSum = 0;
    float fAverage = 0.0f;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    fAverage ((float)iSum / (float)iSize);
    return fAverage;
}

int main()
{
    int iCount = 0;
    int * ptr = NULL;
    int iCnt = 0;
    float fRet = 0;

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

    fRet = Average(ptr, iCount);

    printf("Average of Numbers are : ",fRet);

    free(ptr);

    printf("Deallocate the memory sucessfully!!!");

    return 0;
}