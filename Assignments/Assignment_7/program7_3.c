/*Write a program which accept a number and print its numberline*/
// Input : 4
//Output : -4 -3 -2 -1 0 1 2 3 4 
#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{   
    int iCnt = 0;
    for(iCnt = -iNo; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }

}
int main()
{   
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);


    return EXIT_SUCCESS;
}