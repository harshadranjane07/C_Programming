/*Accept the amount in US dollar and return its corresponding value in Indian Currency. Consider 1$ = 70 Rs  */
#include<stdio.h>
#include<stdlib.h>
int DollerToINR(int iNo)
{
    int iAns = 0;
    iAns = iNo*70;
    return iAns;
}
int main()
{   
    int iValue = 0, iRet = 0;
    printf("Enter number of USD : \n");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);
    printf("Value in INR is : %d \n",iRet);
    return EXIT_SUCCESS;
}