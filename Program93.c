#include<stdio.h>

void Display(int iNo)
{

    int iCnt = 0;
    char ch = 'a';

    for(iCnt = 1; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t",ch);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the count you want to display on screen\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}


// Input = a
// Output = a b C d