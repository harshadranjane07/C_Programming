/*Accept one number from user and print that number of * on the screen*/
#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    while(iCnt<=iNo){
        printf("*");
        iCnt++;
    }
}

int main()
{   int iValue = 0;
    printf("Enter a number\n");
    scanf("%d",&iValue);
    Display(iValue);
    return EXIT_SUCCESS;
}
