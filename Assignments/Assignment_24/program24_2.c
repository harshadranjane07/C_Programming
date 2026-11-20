 
/* Write a program which accept string from user and accept one character.
   Return frequency of that character. */

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
            iCount++;
        }
        str++;
    }

    return iCount;
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

    printf("Frequency of character is : %d\n", iRet);

    return EXIT_SUCCESS;
}

