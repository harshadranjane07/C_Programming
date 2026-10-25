/*
    ----------------------------------------
                Operation ||
    ----------------------------------------
    Result1     Result2     Final Result
    ----------------------------------------
    TRUE        TRUE         TRUE       Short Circuit
    TRUE        FALSE        TRUE       Short Circuit
    FALSE       TRUE         TRUE
    FALSE       FALSE        FALSE
    ----------------------------------------
*/
#include<stdio.h>
#include<stdlib.h>
void  CheckDivisible(int iNo)
{
    if(((iNo % 5) == 0) || ((iNo % 3) == 0))
    {
        printf("It is divisible \n");
    }
    else
    {
        printf("It is Not divisible\n");

    }
}
 
int main()
{   
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    CheckDivisible(iValue);  
    
    return EXIT_SUCCESS;
}