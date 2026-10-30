/*Write a program  which accept number from user and numbers till that number*/
#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
    //Business Logic 
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }

}
int main()
{   
    int iValue = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}