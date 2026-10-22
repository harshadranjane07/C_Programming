/*Accept an integer from user and determine whether it is divisible by 5 without leaving any remainder*/
#include<stdio.h>
#include<stdlib.h>
void CheckDivisibility(int iNo)
{
    if((iNo%5)==0)
    {
        printf("The Number is Divisible by 5\n");
    }
    else{
        printf("The Number is Not Divisible by 5");
    }
}
int main()
{   
    int iValue = 0;
    printf("Enter a number: \n");
    scanf("%d",&iValue);
    CheckDivisibility(iValue);
    return EXIT_SUCCESS;
}