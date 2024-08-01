#include<stdio.h>
#include<Stdlib.h> 

void MAxMin(int Arr[], int iSize)
{
    int iCnt = 0; 
    int iMax = Arr[0];
    int iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMin )
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt] < iMin )
        {
            iMin = Arr[iCnt];
        }

        printf("Maximum Number is : %d\n",iMax);
        printf("Minimum number is : %d\n",iMin);
        
    }
}

int main()
{
    int iCount = 0;
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

    iRet = MaxMin(ptr, iCount);

    free(ptr);

    printf("Deallocate the memory sucessfully!!!");

    return 0;
}