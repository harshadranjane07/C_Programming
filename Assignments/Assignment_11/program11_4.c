/*Write a program which accept range from user and return addition of   all  even  numbers in between that range (Range should contain positive numbers only)*/
#include<stdio.h>
#include<stdlib.h>
int  RangeSumEven(int iStart,int iEnd)
{   int iCnt = 0;
    int iSum = 0;
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt%2) == 0)
        {   
            iSum = iSum + iCnt;
        
        }
    }
    return iSum;

}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting point: ");
    scanf("%d",&iValue1);

    printf("Enter Ending point: ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    printf("The required Sum is : %d ",iRet);

    return EXIT_SUCCESS;

}