/*Write a program which accept number from user and display its multiplication of factors.
*/
#include<stdlib.h>
#include<stdio.h>
int MultiFact(int iNo)
{
    int iCnt = 0;
    int iMul = 1;
    for(iCnt = 1; iCnt<=iNo/2; iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iMul = iMul * iCnt;
        }
    }
    return iMul;

}
int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("Multiplication of Factors: %d",iRet);
    return EXIT_SUCCESS;
}