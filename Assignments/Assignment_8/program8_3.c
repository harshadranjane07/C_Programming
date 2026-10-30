/*Write a program to find factorial of given number*/
#include<stdio.h>
#include<stdlib.h>
int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        iFact = iFact*iCnt;
    }
    return iFact;
}
int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of Number is : %d\n",iRet);
    return EXIT_SUCCESS;
}