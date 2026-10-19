/*Accept the two number from user and display the first number in second number of times*/
//Input 12 5 
//output 12 12 12 12 12 
#include<stdio.h>
#include<stdlib.h>
void Display(int iNo,int iFrequency)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<=iFrequency;iCnt++){
        printf("%d\t",iNo);
    }
}
int main()
{   int iValue = 0;
    int iCount = 0;
    printf("Enter a number : \n");
    scanf("%d",&iValue);
    printf("Enter the Frequency : \n");
    scanf("%d",&iCount);
    Display(iValue,iCount);
    return EXIT_SUCCESS;

}