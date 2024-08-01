#include<stdio.h>

void DisplayExamTime (int iStandard)
{
    if (iStandard == 1)
    {
      printf("Your Exam at 8 Am...\n"); 
    }
    else if (iStandard == 2)
    {
      printf("Your Exam at 9 Am...\n"); 
    }
    else if (iStandard == 3)
    {
      printf("Your Exam at 10 Am...\n");  
    }
    else if (iStandard == 4)
    {
      printf("Your Exam at 11 Am...\n"); 
    }
    else if (iStandard == 5)
    {
      printf("Your Exam at 12 NOOON...\n");  
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