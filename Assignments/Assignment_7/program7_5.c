/*Write a progarm which accept  N and print first 5 multiples of N */
#include<stdio.h>
#include<stdlib.h>
void MultiplayDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=5; iCnt++)
    {
        printf("%d\t",(iCnt*iNo));
    }
}
int main()
{   
    int iValue = 0;

    printf("Enter Nuber: \n");
    scanf("%d",&iValue);

    MultiplayDisplay(iValue);

    return EXIT_SUCCESS;

}