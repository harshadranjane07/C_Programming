/*Write a program which accept string from user and convert it into lower case*/

#include<stdio.h>
#include<stdlib.h>

void strlwrx(char *str)
{
    // Logic
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String: ");
    scanf(" %19[^\n]",arr);

    strlwrx(arr);

    printf("Modified String is : %s\n",arr);

    return EXIT_SUCCESS;
}
