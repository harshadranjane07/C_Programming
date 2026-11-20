/*Write a program which accept string from user and display only digits from that string.*/



#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    // Logic
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String: ");
    scanf(" %19[^\n]",arr);

    printf("Digits from string are : ");
    DisplayDigit(arr);

    printf("\n");

    return EXIT_SUCCESS;
}


