/* Write a program which accept two number from user and check whether numbers are equal or not.
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckEqual(int iFirst,int iSecond)
{   
    return (iFirst==iSecond);
}
int main()
{    
    int iValue1 = 0,iValue2 = 0;
    
    BOOL bRet = FALSE;

    printf("Enter first Number: ");
    scanf("%d",&iValue1);

    printf("Enter second Number: ");
    scanf("%d",&iValue2);

    bRet = CheckEqual(iValue1,iValue2);
    if(bRet == TRUE )
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n"); 
    }
    return EXIT_SUCCESS;
}