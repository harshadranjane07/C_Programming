
/*
Write a program which accept string from user and
return difference between frequency of small characters
and frequency of capital characters.
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int iSmall = 0, iCapital = 0;

    // Filter
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }

        str++;
    }

    return (iSmall - iCapital);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%19[^\n]", arr);

    iRet = Difference(arr);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
