/*Write a program to find even factorial number */
//Input : 5
//Output : 8 (4*2)
#include<stdio.h>
#include<stdlib.h>
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
int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf("Even Factorial of Number is : %d",iRet);

    return EXIT_SUCCESS;
}