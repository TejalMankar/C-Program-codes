#include<stdio.h>

void DisplayExamTime (int iStandard)
{
    switch (iStandard)
    {
        case 1:
        printf("Your Exam at 8 Am...\n");
        break;
        case 2:
        printf("Your Exam at 9 Am...\n");
        break;
        case 3:
        printf("Your Exam at 10 Am...\n");
        break;
        case 4:
        printf("Your Exam at 11 Am...\n");
        break;
        case 5:
        printf("Your Exam at 12 NOON...\n");
        break;
        default :
        printf("Wrong Input...\n");
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter your Standard: \n");
    scanf("%d/n",&iValue);

    DisplayExamTime(iValue);

    return 0;
}