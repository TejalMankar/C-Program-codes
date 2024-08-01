#include<stdio.h>

void Display(int iNo)
{

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the count you want to display %d on screen\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}


// Input = 6
// Output = 1 2 3 4 5 6