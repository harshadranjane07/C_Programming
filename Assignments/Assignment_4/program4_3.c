/*Accept two integers and determine which number is greater .if both number is equal display an appropirate message*/
#include<stdio.h>
#include<stdlib.h>
void FindGreater(int iFirst,int iSecond)
{
    if(iFirst==iSecond){
        printf("Both are Equal Numbers\n");
    }
    if(iFirst>iSecond){
        printf("First number is greater\n");
    }
    else{
        printf("Second number is greater\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter first number : \n");
    scanf("%d",&iValue1);
    printf("Enter second number : \n");
    scanf("%d",&iValue2);
    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}