/*Accepet the age of person and determine whether the person is eligible to Vote. A person must be atleast 18 years old to vote A negative age should be considered as invalid.*/
#include<stdio.h>
#include<stdlib.h>
void  CheckVoteEligibility(int iAge)
{
    if(iAge<0)
    {
        printf("Invalid Age Please try again\n");
    }
    if(iAge>=18){
        printf("person can eligible for vote\n");
    }
    else{
        printf("can not eligibel for vote\n");
    }
}
int main()
{
    int iAge = 0;
    printf("Enter your Age : \n");
    scanf("%d",&iAge);
    CheckVoteEligibility(iAge);
    return EXIT_SUCCESS;
}