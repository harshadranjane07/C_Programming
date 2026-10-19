/*Accept one number from user and print that number of * on the screen*/
#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
     
    while(iNo>=1){
        printf("*");
        iNo--;
    }
}

int main()
{   int iValue = 0;
    printf("Enter a number\n");
    scanf("%d",&iValue);
    Display(iValue);
    return EXIT_SUCCESS;
}
