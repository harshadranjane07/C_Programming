
/* Write a program which accept string from user and Reverse that string inplace. */

#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    // Find last character
    while(*end != '\0')
    {
        end++;
    }
    end--;

    // Logic
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter String: ");
    scanf(" %19[^\n]", arr);

    StrRevX(arr);

    printf("Reversed String is : %s\n", arr);

    return EXIT_SUCCESS;
}
