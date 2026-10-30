
/* Write a program which accepts a number from user
   and displays the below pattern.

   Input : 5
   Output: * * * * * # # # # #
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
