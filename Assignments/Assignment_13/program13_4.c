/*Write a program which accept number from user and returnn the count of odd digits     */
#include<stdio.h>
#include<stdlib.h>
int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
         
        iNo = iNo/10;
        iMul = iMul * iDigit;
    }
    return iMul;
     
}
int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of digit is  : %d",iRet);

    return EXIT_SUCCESS;
}