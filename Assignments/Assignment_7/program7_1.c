/*Write a program which accept number from user and and print that number of $ and * on screen*/
#include<stdio.h>
#include<stdlib.h>
void Pattern(int iNo)
{
    // Business logic
    int iCnt = 0;
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("$   *   ");

    }
}
int main()
{   
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;

}