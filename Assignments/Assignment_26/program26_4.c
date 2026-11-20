
/*
Accept Character from user and check whether it is special symbol or not
(!, @, #, $, %, ^, &, *).
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    // Logic
    if(ch == '!' || ch == '@' || ch == '#' ||
       ch == '$' || ch == '%' || ch == '^' ||
       ch == '&' || ch == '*')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character: ");
    scanf(" %c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return EXIT_SUCCESS;
}
