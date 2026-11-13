/*Write a program which accept number from user and check whether it contain 0 or not */
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckZero(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        if(iDigit == 0)
        {
            return TRUE;
        }
    }
    return FALSE;
}
int main()
{   
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);
    if(bRet == TRUE)
    {
        printf("It contains Zero \n");
    }
    else
    {
        printf("There is No Zero \n");
    }

    return EXIT_SUCCESS;
}