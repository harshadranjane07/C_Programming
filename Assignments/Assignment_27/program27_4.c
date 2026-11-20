/*
Write a program which accept string from user
and check whether it contains vowels in it or not.
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkVovel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' ||
           *str == 'i' || *str == 'o' ||
           *str == 'u' ||
           *str == 'A' || *str == 'E' ||
           *str == 'I' || *str == 'O' ||
           *str == 'U')
        {
            return true;
        }

        str++;
    }

    return false;
}

int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter String: ");
    scanf("%19[^\n]", arr);

    bRet = ChkVovel(arr);

    if(bRet == true)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return EXIT_SUCCESS;
}
