/* Write a program which accept one number from user and check whether that number is greater than 100 or not.
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckGreater(int iNo)
{   
    if(iNo >100)
    {
        return TRUE;
    }
    return FALSE;
}
int main()
{    
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number: ");
    scanf("%d",&iValue);
    bRet = CheckGreater(iValue);
    if(bRet == TRUE )
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n"); 
    }
    return EXIT_SUCCESS;
}