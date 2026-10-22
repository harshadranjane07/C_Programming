/*Write a C program that accepts an integer from user and determine whether the enterd number is positive or negative*/
#include<stdio.h>
#include<stdlib.h>
void CheckNumber(int iNo)
{
    if(iNo>0)
    {
        printf("Positive Number \n");
    }
    else{
        printf("Negative Number \n");
    }
}
int main()
{
    
    int iValue = 0;
    printf("Enter a number : \n");
    scanf("%d",&iValue);
    CheckNumber(iValue);
    return EXIT_SUCCESS;
}