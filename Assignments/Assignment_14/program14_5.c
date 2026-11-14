/*Write a program which accept number from user and return difference between summation of  all its factors and nonfactors.
*/

#include<stdio.h>
#include<stdlib.h>

int SumFactNonFact(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }

    return (iFactSum - iNonFactSum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = SumFactNonFact(iValue);

    printf("Difference is: %d",iRet);

    return EXIT_SUCCESS;
}
