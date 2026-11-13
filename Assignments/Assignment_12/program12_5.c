/*Write a program which accept number from user and count the frequency of such digit which are less than 6 . */
#include<stdio.h>
#include<stdlib.h>
int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCount++;
        }
        iNo = iNo/10;
    }
    return iCount;
}
int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("Count of 2 is : %d",iRet);

    return EXIT_SUCCESS;
}