/*Write a Program that which return differnce between Even factorial and Odd factorial of a given Number*/
#include<stdio.h>
#include<stdlib.h>
int OddFactorial(int iNo)
{   
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iFact = 1;
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        if((iCnt%2) != 0)
        {
            iFact = iFact*iCnt;
        }
    }
    return iFact;
}
int EvenFactorial(int iNo)
{   
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iFact = 1;
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        if((iCnt%2) == 0)
        {
            iFact = iFact*iCnt;
        }
    }
    return iFact;
}
int FactorialDiff(int iNo)
{   
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iAns = 0;
    iAns =EvenFactorial(iNo) - OddFactorial(iNo);
    return iAns;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("Even and Odd Factorial Difference of Number is : %d",iRet);

    return EXIT_SUCCESS;
}