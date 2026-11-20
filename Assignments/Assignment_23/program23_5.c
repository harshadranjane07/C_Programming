/*Write a program which accept string from user and count the number of white spaces.*/




/* Write a program which accept string from user and count the number of white spaces. */

#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
    int iCount = 0;

    // Logic
    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iRet = 0;

    printf("Enter String: ");
    scanf(" %19[^\n]", arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces are : %d\n", iRet);

    return EXIT_SUCCESS;
}



