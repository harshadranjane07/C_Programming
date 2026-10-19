#include<stdio.h>
#include<stdlib.h>
void CheckEven(int iNo)
{   
    if((iNo % 2) == 0)
    {   
        
        printf("It is even number\n");



    }
    else{
        printf("It is odd number\n");

    }   


}
int main()
{   
    int ivalue = 0;

    printf("Enter the number : \n");

    scanf("%d",&ivalue);
    
    CheckEven(ivalue);
     


    return EXIT_SUCCESS;

}