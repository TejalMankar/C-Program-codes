#include<stdio.h>

void Display(int iNo)
{

    int iCnt = 0;
    char ch = '/0';

    for(iCnt = 1; iCnt <= 'iNo'; iCnt++, ch++)
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


// Input = 4
// Output = a b C d