/*Write a program which accept number from user and Display its table.*/
#include<stdio.h>
#include<stdlib.h>
void PrintTable(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=10; iCnt++)
    {
        printf("%d\t",(iCnt*iNo));
    }
}
int main()
{   
    int iValue = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    PrintTable(iValue);

    return EXIT_SUCCESS;
}