
/* Write a program which accept string from user and accept one character.
   Return index of first occurrence of that character. */

#include<stdio.h>
#include<stdlib.h>

int ChkChar(char *str, char ch)
{
    int iCount = 0;

    // Logic
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCount;
        }

        iCount++;
        str++;
    }

    return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String: ");
    scanf(" %19[^\n]", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = ChkChar(arr, cValue);

    if(iRet != -1)
    {
        printf("First occurrence index is : %d\n", iRet);
    }
    else
    {
        printf("Character Not Found\n");
    }

    return EXIT_SUCCESS;
}
