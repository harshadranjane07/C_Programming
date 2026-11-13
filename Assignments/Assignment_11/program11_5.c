/*Write a program which accept range from user and return addition of   all numbers in between that range in reverse order. (Range should contain positive numbers only)*/
#include<stdio.h>
#include<stdlib.h>
void RangeDisplayRev(int iStart,int iEnd)
{   int iCnt = 0;
    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point: ");
    scanf("%d",&iValue1);

    printf("Enter Ending point: ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return EXIT_SUCCESS;

}