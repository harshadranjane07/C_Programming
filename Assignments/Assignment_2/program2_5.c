/*Accept the number from user and check whether number is even or odd*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckEven(int iNo)
{
    if((iNo%2)==0){
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
int main()
{   
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number : \n");
    scanf("%d",&iValue);
    bRet = CheckEven(iValue);
    if(bRet==TRUE){
        printf("It is even number\n");
    }
    else{
        printf("It is odd number\n");
    }



    return 0;
}