/*Write a program which accept number from user and returnn the count of even digits     */
#include<stdio.h>
#include<stdlib.h>
int CountEven(int iNo)
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
        if((iDigit%2) == 0)
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

    iRet = CountEven(iValue);

    printf("Count of Even  is : %d",iRet);

    return EXIT_SUCCESS;
}