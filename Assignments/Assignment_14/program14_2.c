/*Write a program which accept number from user and display its factors in decreasing order.
*/

#include<stdio.h>
#include<stdlib.h>

void MultiFact(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    MultiFact(iValue);

    return EXIT_SUCCESS;
}
