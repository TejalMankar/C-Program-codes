#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],  int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }

    printf("\n");

}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iCount);

    ptr = (int *) malloc(iCount * sizeof(int));

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    Display(ptr,iCount);

    return 0;
}