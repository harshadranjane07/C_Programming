
/*
Accept character from user and display its ASCII value
in decimal, octal and hexadecimal format.
*/

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    // Logic
    printf("Decimal     : %d\n", ch);
    printf("Octal       : %04o\n", ch);
    printf("Hexadecimal : 0X%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter Character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
