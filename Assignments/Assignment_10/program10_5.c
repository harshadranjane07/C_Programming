/* Write a program which accept are in squarefeet  and convert it into square meter(1 square feet = 0.0929 square meter.)  .*/

 
#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iNo)
{
    double dAns = 0.0;
    dAns = (double)(iNo * 0.0929);
    return dAns;
}
 
int main()
{   
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Square Feet Value : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Square Meter Value is %f\n",dRet);
 
    return EXIT_SUCCESS;
}