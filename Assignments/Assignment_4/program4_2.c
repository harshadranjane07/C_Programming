/*Accept an Integer from user and determine whether it is even or odd */
#include<stdio.h>
#include<stdlib.h>
void CheckEvenOdd(int iNo)
{   
    if((iNo%2) == 0){
        printf("Even Number It is \n");
    }
    else{
        printf("Odd Number It is \n");
    }

}
int main()
{
    int iValue = 0;
    printf("Enter a number : \n");
    scanf("%d",&iValue);
    CheckEvenOdd(iValue);
    return EXIT_SUCCESS;
}