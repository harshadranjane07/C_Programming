/*Write a program which accept number from user and if number less than 50 then print small, if it is greater than 50 and less than 100 print Medium,if it is greater than 100 print large*/
#include<stdio.h>
#include<stdlib.h>
void Number(int iNo)
{
    if(iNo>=100)
    {
        printf("larger\n");
    }
    else if(iNo<100 && iNo>= 50)
    {
        printf("Medium\n");
    }
    else{
        printf("Smaller\n");
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);
    
    Number(iValue);

    return EXIT_SUCCESS;
}