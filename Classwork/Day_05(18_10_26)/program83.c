  
#include<stdio.h>
#include<stdlib.h>
void  CheckDivisible(int iNo){
    if((iNo%3)==0){
        printf("The Number is Divisible by 3\n");
    }
    else{
        printf("It is Not divisible\n");

    }
}
 
int main()
{   int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);
    CheckDivisible(iValue);  
    
    return EXIT_SUCCESS;
}