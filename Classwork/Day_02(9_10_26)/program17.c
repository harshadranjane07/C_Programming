#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int ivalue = 0;
    printf("Enter the number : \n");
    scanf("%d",&ivalue);
    if((ivalue % 2) == 0)
    {   
        
        printf("It is even number\n");



    }
    else{
        printf("It is odd number\n");

    }


    return EXIT_SUCCESS;

}