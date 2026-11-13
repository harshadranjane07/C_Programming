/*Write a program which accept number from user and returnn the difference between summation of even digits and summation of odd digits.*/

#include<stdio.h>
#include<stdlib.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int evenSum = 0, oddSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            evenSum = evenSum + iDigit;
        }
        else
        {
            oddSum = oddSum + iDigit;
        }

        iNo = iNo / 10;
    }

    return (evenSum - oddSum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("Difference between even and odd digits sum is: %d", iRet);

    return EXIT_SUCCESS;
}
